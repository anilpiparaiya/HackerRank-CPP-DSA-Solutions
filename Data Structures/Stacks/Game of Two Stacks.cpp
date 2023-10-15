int twoStacks(int maxSum, vector<int> a, vector<int> b) {
    int result = 0, st1_count = 0, st2_count = 0, total_sum = 0;

    // Get elements from first stack
    for (auto st1_element : a) {
      if (total_sum + st1_element > maxSum) break;
      total_sum += st1_element;
      st1_count++;
    }
    result = st1_count;

    // Try to use elements of second stack
    for (auto st2_element : b) {
      total_sum += st2_element;
      st2_count++;
      while (total_sum > maxSum && st1_count > 0) {
        total_sum -= a[st1_count - 1];
        st1_count--;
      }
      result = (total_sum <= maxSum) ? max(st1_count + st2_count, result) : result;
    }

    return result;
  }
