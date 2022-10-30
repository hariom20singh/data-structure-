interface RAM
{
void process ();
}
interface MOUSE
{
void process();
}
class system implements RAM,MOUSE
{
public void process()
{
System.out.println("RAM Fit in System");
System.out.println("MOUSE Fit in System");
}
}
class interface_ex
{
public static void main(String args[])
{
system S=new system();
S.process();
S.process();
}
}
