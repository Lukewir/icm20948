fn main() {
    println!("cargo:rerun-if-changed=cpp");
    println!("cargo:rerun-if-changed=sparkfun");

    cc::Build::new()
        .cpp(true)
        .file("cpp/all.cpp")
        .include("sparkfun")
        .include("cpp")
        // .cpp_link_stdlib("stdc++") // use libstdc++
        .compile("libsys.a");
}
