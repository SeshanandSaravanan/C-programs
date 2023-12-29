import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
public class ArrayOpp{
public static void main(String[] args) {
int[] array = {1, 2, 3, 4, 5};
int partitionSize = 2;
int[] partitionOrder = {3, 2, 1};
List<Integer[]> partitions = partitionArray(array, partitionSize);
int[] mergedArray = mergePartitions(partitions, partitionOrder);
System.out.println(Arrays.toString(mergedArray));
}
private static List<Integer[]> partitionArray(int[] array, int partitionSize) {
List<Integer[]> partitions = new ArrayList<>();
for (int i = 0; i < array.length; i += partitionSize) {
int endIndex = Math.min(i + partitionSize, array.length);
Integer[] partition = new Integer[endIndex - i];
for (int j = i; j < endIndex; j++) {
partition[j - i] = array[j];
}
partitions.add(partition);
}
return partitions;
}
private static int[] mergePartitions(List<Integer[]> partitions, int[] partitionOrder) {
List<Integer> result = new ArrayList<>();
for (int order : partitionOrder) {
if (order <= partitions.size()) {
result.addAll(Arrays.asList(partitions.get(order - 1)));
}
}
return result.stream().mapToInt(Integer::intValue).toArray();
}
}