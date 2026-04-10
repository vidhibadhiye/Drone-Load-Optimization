# Drone-Load-Optimization
🚁 Knapsack Problem – Drone Delivery Optimization

This project is about solving the Knapsack Problem using real-world logic. We’ve taken a practical scenario where delivery drones need to carry packages and used algorithms to decide the best combination of packages.

 What is the Problem?

Imagine a delivery drone that can carry only a limited weight. There are multiple packages, each with its own weight and profit (delivery value).

The goal is simple:
 Pick the right packages so that profit is maximum without exceeding the weight limit.

 What We Did

We solved this problem using two different approaches:

🔹 Greedy Method (Fractional Knapsack)
Chooses packages based on profit per weight
Can take partial packages
Very fast and simple

 Best when splitting items is allowed

🔹 Dynamic Programming (0/1 Knapsack)
Considers all possible combinations
Packages are either taken or not taken (no splitting)
Gives the most accurate result

 Best for real-life scenarios

📁 Files in the Project
greedy.c → Greedy approach (Fractional Knapsack)
dp.c → Dynamic Programming approach (0/1 Knapsack)
Knapsack_Problem(final).pdf → Full report with explanation
