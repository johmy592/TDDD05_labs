/**
 * Created by johannes on 4/5/18.
 */
public class main
{
    public static void main(String[] args)
    {
        DataCarrier dc = new DataCarrier(1,1,1,1,1,"hej");
        System.out.println(dc.getValue());
        dc.setState(1,2,0,3,2);
        dc.setValue("Pelle");
        System.out.println(dc.getValue());
        dc.setState(1,0,0,0,0);
        dc.setValue("xD");
        System.out.println(dc.getValue());
    }
}
