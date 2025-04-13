from typing import List


class Solution:
    def insert(
        self, intervals: List[List[int]], newInterval: List[int]
    ) -> List[List[int]]:
        # leetcode practice
        # read question slowly and gather details
        # examples to clarify assumption
        # constraints on all inputs
        # assumption that equal value of st

        arr = intervals
        n = len(arr)
        ni = newInterval
        ci = ni
        ans = []
        # current interval
        for i in range(n):
            ti = arr[i]
            if ci[1] < ti[0]:  # place before this one not overlapping
                ans.append(ci)
                ci = ti
            elif ci[0] <= ti[1]:
                ci[0] = min(ti[0], ci[0])
                ci[1] = max(ti[1], ci[1])
            elif ci[0] > ti[1]:
                ans.append(ti)
        ans.append(ci)

        return ans
