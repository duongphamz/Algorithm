func deviceNamesSystem(devicenames: [String]) -> [String] {
    var result = [String]()
    let deviceNameSet = Set(devicenames)
    var occurArray: [String: Int] = [:]
    
    for name in deviceNameSet {
        occurArray[name] = 0
    }
    
    for name in devicenames {
        var resultName = name
        
        if occurArray[name] == 0 {
            resultName = name
        } else {
            resultName = name + "\(String(occurArray[name]!))"
        }
        occurArray[name]! += 1
        
        
        result.append(resultName)
    }
    return result
}
