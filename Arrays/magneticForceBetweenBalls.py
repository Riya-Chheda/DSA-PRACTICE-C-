class Solution:
    def maxDistance(self, position, m):
        position.sort()
        n = len(position)
        
        start, end, ans = 1, position[n - 1] - position[0], 0
        
        while start <= end:
            mid = start + (end - start) // 2
            basket = 1
            mindist = position[0]
            
            for i in range(1, n):
                if mindist + mid <= position[i]:
                    basket += 1
                    mindist = position[i]
            
            if basket < m:
                end = mid - 1
            else:
                ans = mid
                start = mid + 1
        
        return ans


# ---- Driver code (user input lene ke liye) ----
if __name__ == "__main__":
    # Array input - space separated numbers ek line mein
    position = list(map(int, input("Enter positions (space-separated): ").split()))
    
    # m input
    m = int(input("Enter number of balls (m): "))
    
    sol = Solution()
    result = sol.maxDistance(position, m)
    
    print("Maximum minimum distance:", result)