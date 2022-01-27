func twoSum(_ nums: [Int], _ target: Int) -> [Int] {

    let set = Set(nums)
    
    for (i, num) in nums.enumerated() {
        let subtract = target - num
        if set.contains(subtract) {
            let length = nums.count
            for j in i+1..<length {
                if nums[j] == subtract {
                    return [i, j]
                }
            }
        }
    }
    
    return [0, 0]
}
