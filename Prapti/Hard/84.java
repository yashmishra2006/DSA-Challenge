class Solution {
    public int largestRectangleArea(int[] heights) {
        int[] nsl = new int[heights.length];
        int[] nsr = new int[heights.length];

        //next smaller right
        Stack<Integer> s = new Stack<>();

        for (int i = heights.length -1 ; i >= 0; i--) {
            while (!s.isEmpty() && heights[s.peek()] >= heights[i]) {
                s.pop();
            }

            if (s.isEmpty()) {
                nsr[i] = heights.length;
            } else {
                nsr[i] = s.peek();
            }

            s.push(i);
        }

        //next smaller left
        Stack<Integer> s1 = new Stack<>();

        for (int i = 0; i < heights.length; i++) {
            while (!s1.isEmpty() && heights[s1.peek()] >= heights[i]) {
                s1.pop();
            }

            if (s1.isEmpty()) {
                nsl[i] = -1;
            } else {
                nsl[i] = s1.peek();
            }

            s1.push(i);
        }

        int width;
        int max = 0;
        int[] rect = new int[heights.length];
        for (int i = 0; i < heights.length; i++) {
            width = nsr[i] - nsl[i] - 1;
            rect[i] = heights[i] * width;
            max = Math.max(max, rect[i]);
        }

        return max;
    }
}
