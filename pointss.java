class Point
{
    int x;
    int y;

    Point()
    {
        x=0;
        y=0;
    }
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    Point(Point p1)
    {
        x = p1.x;
        y = p1.y;
    }

    double findDistance()
    {
        double dist = Math.sqrt((y*y) + (x*x));
        return dist;
    }

    double findDistance(int x1, int y1)
    {
        double dist = Math.sqrt(((y-y1)*(y-y1)) + ((x-x1)*(x-x1)));
        return dist;
    }

    double findDistance(Point p1)
    {
        double dist = Math.sqrt(((y-p1.y)*(y-p1.y)) + ((x-p1.x)*(x-p1.x)));
        return dist;
    }

    void show()
    {
        System.out.println("The points are: " + x + ", " + y);
    }
    boolean isEqual(Point p1)
    {
        if(p1.x==x && p1.y==y)
    return true;
        else
            return false;
    }
}
public class PointDemo
{
    public static void main(String[] args)
    {
        Point p = new Point(5, 7);
        p.show();
        double distance_origin = p.findDistance();
        System.out.println("The distance from the origin is: " + distance_origin + " units");

        double distance_point = p.findDistance(10, 6);
        System.out.println("The distance from the given point is: " + distance_point + " units");

        Point p1 = new Point(8, 15);
        double distance_object = p.findDistance(p1);
        System.out.println("The distance from the given object is: " + distance_object + " units");

        boolean equal = p.isEqual(p1);
        if(equal==true)
            System.out.println("Points are equal");
    }
}