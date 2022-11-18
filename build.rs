fn main() {
    println!("cargo:rerun-if-changed=cpp");
    println!("cargo:rerun-if-changed=sparkfun");

    cc::Build::new()
        .cpp(true)
        .file("sparkfun/src/ICM_20948.cpp")
        .include("sparkfun")
        .include("cpp")
        .include("src")
        //.cpp_link_stdlib("stdc++")
        //.cpp_link_stdlib("stdc++") // use libstdc++
        .compile("libsys.a");
}
