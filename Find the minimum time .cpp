    int minTime(int S1, int S2, int N){
  if (S1 > S2) swap(S1, S2);
  int low = 0, high = N, mid, minimum = min(S1, S2) * N;
  while (low <= high) {
    mid = low + (high - low) / 2;
    minimum = min(minimum, max(S1 * mid, S2 * (N - mid)));
    if (S1 * mid <= S2 * (N - mid))
      low = mid + 1;
    else
      high = high - 1;
  }
  return minimum;}
