class Solution {
public:
    int maxArea(vector<int>& heights) {
        //creates var that starts at beggining of array
        int left = 0;
        //creates var that starts at end of the array
        int right = heights.size() - 1;
        //stores the maximum array
        int max_area = 0;

        while(left < right){
            //finds the smallest number of the two heights for the height
            int h = min(heights[left],heights[right]);
            //Finds the width
            int w = right - left;
            int area = h * w;
            //Updates max area by finding the largest area
            max_area = max(max_area,area);
            //If the left number is smaller than right then moveto the next number 
            if(heights[left] < heights[right]){
                left++;
            }else{
                right--;
            }



        }
        return max_area;
    }
};
