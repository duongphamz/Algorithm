class Solution {
    func plusOne(_ digits: [Int]) -> [Int] {
        var digits = digits
        var plus: Int = 1
        let count = digits.count
        
        for i in (0...(count-1)).reversed() {
            if digits[i] == 9, plus == 1 {
                digits[i] = 0
            } else if plus == 1 {
                digits[i] += 1
                plus = 0
            }
        }
    
        if plus == 1 {
            digits.insert(1, at: 0)
        }
        return digits
    }
}