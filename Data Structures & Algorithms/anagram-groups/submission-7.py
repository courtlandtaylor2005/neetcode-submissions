class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        grouped_anagram = {}

        for strings in strs:
            sorted_word = "".join(sorted(strings))

            if sorted_word not in grouped_anagram:
                grouped_anagram[sorted_word] = []
            
            grouped_anagram[sorted_word].append(strings)

        results = list(grouped_anagram.values())
        return results

        