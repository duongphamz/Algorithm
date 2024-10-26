func binarySearch(_ array: [Int], target: Int) -> Int? {
    var left = 0
    var right = array.count - 1
    
    while left <= right {
        let mid = left + (right - left) / 2 // avoid integer overflows
        if array[mid] == target {
            return mid
        }
        if array[mid] > target {
            right = mid - 1
        } else {
            left = mid + 1
        }
    }
    return nil
}