#![allow(unused_imports)]

use num_traits::{Zero, One};
use ark_ec::PairingEngine;
use num::{BigUint, BigInt, Num, bigint};
use ark_poly::{self, univariate::DensePolynomial, Polynomial};
use ark_bls12_381::Bls12_381;
use std::cmp::min;

pub fn nextPowerOfTwo(x: i32) -> i32 {

    let mut k: i32;
    let mut n: u32;
    let um: u32;

    if x < 0 {return 0};

    um = x as u32;
    n = 1;
    k = 0;

    while n < um {
        n = n << 1;
        k = k + 1;
    }

    return k;
}

fn ssFFTRoundup(xn: i32, k: i32) -> i32 {
    let n: i32 = 1 << k;
    if xn <= 0 {xn = 1};

    xn = ((xn + ((1 << 3)-1)) >> 3) << 3;

    if xn > n - (n >> 4) { xn = n };

    return xn;
}

pub fn ssmul<F: ark_ff::PrimeField>(a: &DensePolynomial<F>, b: &DensePolynomial<F>) -> DensePolynomial<F> {

    let na: i32 = a.degree() as i32;
    let nb: i32 = b.degree() as i32;

    if na <= 0 || nb <= 0 {
        let c: DensePolynomial<F> = a.clone();
        c.naive_mul(b);
        return c;
    }

    let n: i32 = na + nb;

    // initiate field
    let l: i32 = nextPowerOfTwo(n+1)-1;
    let N: i32 = 1 << (l+1); // sets N = 2^{l+1}

    // numBits counts the number of bits in an integer
    let bound: i32 = 2 + numBits(min(na, nb)) + 2*numBits(F::characteristic());

    let r: i32 = (bound >> l) + 1;
    let mr: i32 = r << 1;

    // sqrt(2) trick? need to find out what this does
    let l1: i32 = l;
    if l1 >= 3 {
        let alt_l1 = l-1;
        let alt_r = (bound >> alt_l1) + 1;
        let alt_mr = alt_r << alt_l1;

        if alt_mr < (mr - mr/8) {
            l1 = alt_l1;
            r = alt_r;
            mr = alt_mr;
        }
    }

    // initialize p = 2^{mr}+1
    let mut p: BigInt = Zero::zero();
    // leftShift(p, p, mr); //shift the BigInt

    let mut aa: Vec<F> = a.coeffs;
    let mut bb: Vec<F> = b.coeffs;

    let yn = ssFFTRoundup(n+1, l+1);

    // Initialize FFT Field



}