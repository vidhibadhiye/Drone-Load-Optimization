#include <stdio.h>
int max(int a, int b) {
return (a > b) ? a : b;
}
int main() {
int n, capacity;
printf("Enter number of packages: ");
scanf("%d", &n);
int weight[n], profit[n];
printf("Enter weights:\n");
for (int i = 0; i < n; i++) {
scanf("%d", &weight[i]);
}

printf("Enter profits:\n");
for (int i = 0; i < n; i++) {
scanf("%d", &profit[i]);
}
printf("Enter capacity: ");
scanf("%d", &capacity);
// DP table
int dp[n + 1][capacity + 1];
// Fill table
for (int i = 0; i <= n; i++) {
for (int w = 0; w <= capacity; w++) {
if (i == 0 || w == 0)
dp[i][w] = 0;
else if (weight[i - 1] <= w)
dp[i][w] = max(
profit[i - 1] + dp[i - 1][w - weight[i - 1]],
dp[i - 1][w]
);
else
dp[i][w] = dp[i - 1][w];
}
}
printf("Maximum Profit = %d\n", dp[n][capacity]);
return 0;
}