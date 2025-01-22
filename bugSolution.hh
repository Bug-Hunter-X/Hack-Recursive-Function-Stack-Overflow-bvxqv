function foo(x: int): int {
  if (x < 0) {
    return 0; // Handle negative input
  } elseif (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
  echo foo(-5);
}

This corrected version handles negative input by returning 0.  It now correctly computes the factorial for non-negative numbers and gracefully handles negative input, preventing stack overflow errors.