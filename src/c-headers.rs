use ::safer_ffi::prelude::*;

/// A `struct` usable from both Rust and C
#[derive_ReprC]
#[repr(C)]
#[derive(Debug, Clone, Copy)]

pub struct AccelGyro {
    ax: i32,
    ay: i32,
    az: i32,
    aw: i32,
    gx: i32,
    gy: i32,
    gz: i32,
    gw: i32,
}