#include <stdio.h>
int main() {
int n, capacity;
printf("Enter number of packages: ");
scanf("%d", &n);
int weight[n], profit[n];
float ratio[n];
// Input weights
printf("Enter weights:\n");
for (int i = 0; i < n; i++) {
scanf("%d", &weight[i]);
}
// Input profits
printf("Enter profits:\n");
for (int i = 0; i < n; i++) {
scanf("%d", &profit[i]);
}
// Calculate ratio
for (int i = 0; i < n; i++) {
ratio[i] = (float)profit[i] / weight[i];
}
printf("Enter capacity: ");
scanf("%d", &capacity);
// Simple sorting (based on ratio)
for (int i = 0; i < n - 1; i++) {
for (int j = i + 1; j < n; j++) {
if (ratio[i] < ratio[j]) {
// swap ratio
float temp = ratio[i];
ratio[i] = ratio[j];

ratio[j] = temp;
// swap weight
int t = weight[i];
weight[i] = weight[j];
weight[j] = t;
// swap profit
t = profit[i];
profit[i] = profit[j];
profit[j] = t;
}
}
}
float totalProfit = 0;
// Knapsack logic
for (int i = 0; i < n; i++) {
if (capacity >= weight[i]) {
totalProfit += profit[i];
capacity -= weight[i];
} else {
totalProfit += ratio[i] * capacity;
break;
}
}
printf("Maximum Profit = %.2f\n", totalProfit);
return 0;
}