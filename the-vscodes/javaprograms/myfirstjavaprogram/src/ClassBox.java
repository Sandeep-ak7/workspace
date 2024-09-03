

public class ClassBox {
    private int length, breadth, height;
    private String boxName;

    public void setDimension(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    public void setBoxName(String boxName) {
        this.boxName = boxName;
    }

    public void showBoxName() {
        System.out.println("boxName=" + this.boxName);
    }

    public void showDimension() {
        System.out.println("L=" + length);
        System.out.println("B=" + breadth);
        System.out.println("H=" + height);
    }

    public void calculateVolume() {

        int volume;
        volume = length * breadth * height; // assignment
        System.out.println("volume=" + volume);
    }

    public int calculatesurfacearea() {
        int surfacearea;
        surfacearea = 2 * (length * breadth + breadth * height + length * height);
        return surfacearea;
    }

    static class Example {
        public static void main(String[] args) {
            ClassBox smallBox = new ClassBox();
            smallBox.setDimension(12, 10, 5);
            smallBox.showDimension();
            smallBox.setBoxName("cuboid");
            smallBox.showBoxName();
            smallBox.calculateVolume();

            int answer = smallBox.calculatesurfacearea();
            System.out.println("Answer=" + answer);
        }
    }

}
