class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hash_map = {}
        for num in nums:
            if num not in hash_map:
                hash_map[num] = 1
            else:
                hash_map[num] += 1
        sorted_elements = sorted(hash_map, key = hash_map.get, reverse = True)
        top_k_elements = sorted_elements[:k]
        return top_k_elements

            