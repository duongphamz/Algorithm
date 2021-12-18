let keyword = "balloon"

func maxNumberOfBalloons(_ text: String) -> Int {
    var result = Int.max
    var alphabetArray = Array(repeating: 0, count: 26)
    var ballonArray = Array(repeating: 0, count: 26)
    for character in text {
        let index = Int(character.asciiValue! - 97)
        alphabetArray[index] += 1
    }
    
    for character in keyword {
        let index = Int(character.asciiValue! - 97)
        ballonArray[index] += 1
    }
    
    for character in keyword {
        let index = Int(character.asciiValue! - 97)
        let divide = alphabetArray[index] / ballonArray[index]
        result = min(result, divide)
    }
    return result == Int.max ? 0 : result
}
