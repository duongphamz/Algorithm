//input: array [2,1,3] => output: [0, -1, 3]

func solution(arr: [Int]) -> [Int] {
    var sum = arr.reduce(0, +)
    var result = Array(repeating: 0, count: arr.count)
    let maxIndex = arr.count - 1
    for i in (0...maxIndex).reversed() {
        let counter = i * arr[i] - (sum - arr[i])
        sum -= arr[i]
        result[i] = counter
    }
    return result
}
