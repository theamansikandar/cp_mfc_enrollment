# cp_mfc_enrollment

---

## How Insertion Sort Works

Insertion Sort is a simple sorting algorithm that builds the final sorted array one element at a time. It works by taking each element (key) and inserting it into its correct position among the previously sorted elements.

### Steps:
1. Start from the second element (index `1`).
2. Compare the current element (`key`) with all elements before it.
3. Shift all larger elements one position to the right.
4. Insert the `key` into its correct position.

---

## Performance Analysis

| **Case**          | **Time Complexity** |
|--------------------|----------------------|
| Best Case (Sorted) | \( O(n) \)          |
| Average Case       | \( O(n^2) \)        |
| Worst Case         | \( O(n^2) \)        |

- **Space Complexity**: \( O(1) \), as it sorts in place.
- **Stability**: Insertion Sort is a **stable** sorting algorithm since it preserves the relative order of equal elements.

---

## Comparison with Bubble Sort and Selection Sort

| **Algorithm**      | **Time Complexity (Best)** | **Time Complexity (Worst)** | **Space Complexity** | **Stable?** |
|---------------------|----------------------------|-----------------------------|-----------------------|-------------|
| **Insertion Sort**  | \( O(n) \)                | \( O(n^2) \)               | \( O(1) \)           | Yes         |
| **Bubble Sort**     | \( O(n) \)                | \( O(n^2) \)               | \( O(1) \)           | Yes         |
| **Selection Sort**  | \( O(n^2) \)              | \( O(n^2) \)               | \( O(1) \)           | No          |

### Key Points:
- **Insertion vs Bubble Sort**:
  - Both have similar time complexities.
  - Insertion Sort is generally faster for small or partially sorted arrays due to fewer swaps.
- **Insertion vs Selection Sort**:
  - Selection Sort performs fewer swaps but is not stable.
  - Insertion Sort is more efficient when the array is nearly sorted.

---

## When to Use Insertion Sort?

- Best suited for small datasets or nearly sorted data.
- Avoid using it for large datasets due to its \( O(n^2) \) complexity in the average and worst cases.
