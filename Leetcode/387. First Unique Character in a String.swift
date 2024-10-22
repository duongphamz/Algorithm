class Solution {
    func firstUniqChar(_ s: String) -> Int {
        var appearances: [Character: Int] = [:] //can use a Array Int with size 26 for better performance.
        for c in s {
            appearances[c, default: 0] += 1
        }
        for (i, c) in s.enumerated() {
            if appearances[c] == 1 {
                return i
            }
        }
        
        return -1
    }
}