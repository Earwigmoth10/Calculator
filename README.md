# Simple Interest Calculator

A simple program that calculates simple interest on a principal amount.

## What is Simple Interest?

Simple interest is interest calculated only on the original principal
amount, not on previously earned interest.

## Formula

**Simple Interest (SI) = (P × R × T) / 100**

Where:
- **P** = Principal amount (the initial money)
- **R** = Annual rate of interest (in %)
- **T** = Time period (in years)

**Total Amount = Principal + Simple Interest**

## Example

| Input | Value |
|-------|-------|
| Principal (P) | 10,000 |
| Rate (R) | 5% |
| Time (T) | 3 years |

SI = (10000 × 5 × 3) / 100 = **1,500**
Total Amount = 10,000 + 1,500 = **11,500**

## How to Use

1. Enter the principal amount.
2. Enter the annual interest rate (%).
3. Enter the time period in years.
4. The calculator displays the simple interest and total amount.

## Sample Code (Python)

```python
principal = float(input("Enter principal amount: "))
rate = float(input("Enter annual rate of interest (%): "))
time = float(input("Enter time in years: "))

interest = (principal * rate * time) / 100
total = principal + interest

print(f"Simple Interest: {interest}")
print(f"Total Amount: {total}")
```

## Author

Laiba Aamir
