class Solution {
    func findContentChildren(_ g: [Int], _ s: [Int]) -> Int {
        
        let sortedG = g.sorted()
        let sortedS = s.sorted()
        
        var i = 0
        var j = 0
        
        while j < s.count && i < g.count {
            if sortedS[j] >= sortedG[i] {
                i += 1
            }
            j += 1
        }
        return i
    }
}