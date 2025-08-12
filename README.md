# **GNCSGI Competitive Coding Challenges**

_A repository containing solutions to various competitive programming challenges.

## 🔹 **Overview**
This project consists of solutions to **algorithmic problems** from platforms like **LeetCode, CodeChef, Codeforces, and HackerRank**.

✅ **Key Features:**
- Covers **Data Structures & Algorithms** (DSA) 📌
- Solutions in **C++** ⚡
- Well-commented code for easy understanding 📝
- Includes **sorting, searching, graph, and DP problems** 🏆

## 🔹 **Tech Stack**
- 🟢 C++
- 🟢 Jupyter Notebook / VS Code


## 🔹 **Topics Covered**
✅ **Sorting Algorithms** (QuickSort, MergeSort, etc.)
✅ **Graph Algorithms** (BFS, DFS, Dijkstra's)
✅ **Dynamic Programming** (Knapsack, LCS, etc.)
✅ **String Manipulation** (KMP, Rabin-Karp)
✅ **Bit Manipulation & Number Theory**
✅ **Greedy Algorithms**
✅ **Recursion & Backtracking**

## 🔹 **Installation & Setup**
```bash
# Clone the repository
git clone https://github.com/Rishita-rm/GNCSGI_COMPETITIVE_CODING.git

# Navigate to the project folder
cd GNCSGI_COMPETITIVE_CODING

# Run Python solutions
python solution.py
```

## 🔹 **How to Use?**
1. Select a coding problem category
2. Run the solution file (Python or C++)
3. Modify inputs & test cases as needed
4. Optimize and contribute!

## 🔹 **Example Problem & Solution**
📌 **Problem:** Find the longest increasing subsequence (LIS) in an array.

```python
# Python solution for LIS
from bisect import bisect_left

def length_of_lis(nums):
    lis = []
    for num in nums:
        pos = bisect_left(lis, num)
        if pos == len(lis):
            lis.append(num)
        else:
            lis[pos] = num
    return len(lis)

nums = [10, 9, 2, 5, 3, 7, 101, 18]
print(length_of_lis(nums))  # Output: 4
```
