class Solution:
    def romanToInt(self, s: str) -> int:
        dic =  {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000,
        }

        sum = 0
        index = 0

        while index < len(s):
            currentValue = dic[s[index]]
            if index + 1 < len(s):
                nextValue = dic[s[index+1]]
                if nextValue > currentValue:
                    sum = sum - currentValue + nextValue
                    index += 2
                else:
                    sum += currentValue
                    index += 1 
            else:
                sum += currentValue
                index += 1

        return sum  
