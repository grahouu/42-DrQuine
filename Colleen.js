/*
  coucou
*/
function foo() {
    return 1
}
function main() {
    /*
      in main
    */
    foo();
    return ("/*\n  coucou\n*/\n" + foo.toString() + "\n" + main.toString() + "\nconsole.log(main());")
}
console.log(main());
