mod c_headers;

use ::safer_ffi::prelude::*;

/// A `struct` usable from both Rust and C
#[derive_ReprC]
#[repr(C)]
#[derive(Debug, Clone, Copy)]

#[ffi_export]
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

pub fn generate_headers() -> ::std::io::Result<()> {
    ::safer_ffi::headers::builder()
        .to_file("filename.h")?
        .generate()
}

