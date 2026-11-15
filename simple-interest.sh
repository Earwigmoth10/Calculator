#!/bin/bash
# Simple Interest Calculator
# Formula: SI = (P * R * T) / 100

echo "===== Simple Interest Calculator ====="

read -p "Enter the principal amount: " principal
read -p "Enter the rate of interest (% per year): " rate
read -p "Enter the time period (in years): " time

# Check that all three inputs are valid numbers
for value in "$principal" "$rate" "$time"; do
    if ! [[ "$value" =~ ^[0-9]+([.][0-9]+)?$ ]]; then
        echo "Error: please enter positive numbers only."
        exit 1
    fi
done

interest=$(awk "BEGIN {printf \"%.2f\", ($principal * $rate * $time) / 100}")
total=$(awk "BEGIN {printf \"%.2f\", $principal + $interest}")

echo "--------------------------------------"
echo "Principal      : $principal"
echo "Rate of Interest: $rate %"
echo "Time Period    : $time years"
echo "Simple Interest: $interest"
echo "Total Amount   : $total"
