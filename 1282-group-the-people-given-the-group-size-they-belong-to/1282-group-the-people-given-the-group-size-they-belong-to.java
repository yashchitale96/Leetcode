import java.util.*;
class Solution {
    public List<List<Integer>> groupThePeople(int[] arr) {
        List<List<Integer>> ans = new ArrayList<>();
        HashMap<Integer,List<Integer>> map = new HashMap<>();
        for (int i=0; i<arr.length; i++){
            int num = arr[i];
            if (!map.containsKey(num)){
                List<Integer> ls = new ArrayList<>();
                ls.add(i);
                map.put(num,ls);
            }
            else {
                
                if (map.get(num).size() == num){
                    ans.add(map.get(num));
                    map.remove(num);
                    List<Integer> ls = new ArrayList<>();
                    ls.add(i);
                    map.put(num,ls);
                }
                else{
                    map.get(num).add(i);
                }
            }
        }
        for (int l : map.keySet()){
            ans.add(map.get(l));
        }
        return ans;
    }
}