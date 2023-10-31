class Solution {
    public int find(int[] row, int item){
        for(int i = 0; i < row.length; i++){
            if(row[i] == item) return i;
        }
        return -1;
    }

    public int minSwapsCouples(int[] row) {
        int count = 0;
        for(int i = 1; i < row.length; i += 2){
            if(row[i] % 2 == 0){
                // even
                if(row[i - 1] != row[i] + 1){
                    int idx = find(row, row[i] + 1);
                    int tmp = row[i - 1];
                    row[i - 1] = row[idx];
                    row[idx] = tmp;
                    count++;
                }
            } else {
                // odd
                if(row[i - 1] != row[i] - 1){
                    int idx = find(row, row[i] - 1);
                    int tmp = row[i - 1];
                    row[i - 1] = row[idx];
                    row[idx] = tmp;
                    count++;
                }
            }
        }
        return count;
    }
}