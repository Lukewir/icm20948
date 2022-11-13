
use ::safer_ffi::prelude::*;

/// A `struct` usable from both Rust and C
#[derive_ReprC]
#[repr(C)]
#[derive(Debug, Clone, Copy)]

pub struct Point {
    x: f64,
    y: f64,
    z: f64,
    w: f64,
    ax: f64,
    ay: f64,
    az: f64,
    aw: f64,
}

fn READ(aa: int32_t, ab: int32_t, ac: int32_t, aw: int32_t, ga: int32_t, gb: int32_t, gc: int32_t, gw: int32_t) {
        struct gyroquat {
            x: ga,
            y: gb,
            z: gc,
            w: gw,
            ax: aa,
            ay: ab,
            az: ac,
            aw: aw,      
        };
}


fn generate_headers () -> ::std::io::Result<()>
{
    ::safer_ffi::headers::builder()
        .to_file("rust_points.h")?
        .generate()
}

