fn main() {
    println!("cargo:include=/opt/homebrew/opt/ncurses/lib");
    println!("cargo:rustc-link-search=native=/opt/homebrew/opt/ncurses/include");
    println!("cargo:rustc-link-lib=static=ncurses");

    // Link the C stdlib statically if needed
    //println!("cargo:rustc-link-lib=static=c");

    // Ensure not to link the dynamic version
    println!("cargo:rustc-cdylib-link-arg=-Wl,-Bstatic");

    // Include the static libSillyLib.a from cpp/build folder
    //println!("cargo:rustc-link-arg=-static");
    println!("cargo:rustc-link-arg=-L../cpp/build");
    //println!("cargo:rustc-link-arg=-lSillyLib");
    println!("cargo:rustc-link-lib=static=SillyLib");
}