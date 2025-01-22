function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}

This code has an error: It does not handle the case of negative input.  The recursive call will continue indefinitely resulting in a stack overflow.

The line `return x * foo(x-1);` is problematic when x is negative, and it should include a check for negative input to prevent this behavior.