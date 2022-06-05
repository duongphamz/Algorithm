func isPalindrome(_ x: Int) -> Bool {
    var array: [Int] = []
    if x < 0 { return false }
    var number = x
    while number > 0 {
        array.append(number % 10)
        
        number /= 10
    }
    
    let length = array.count
    
    for i in 0..<length/2 {
        if array[i] != array[length - i - 1] {
            return false
        }
    }
    
    return true
}

//Python solution
// class Solution:
//     def isPalindrome(self, x: int) -> bool:
//         if x < 0:
//             return False

//         reversedNumber = 0
//         originalNumber = x

//         while x != 0:
//             _remainder = x % 10
//             reversedNumber = reversedNumber * 10 + _remainder
//             x //= 10

//         return reversedNumber == originalNumber
