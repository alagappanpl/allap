import java.util.*;
public class spanning
{
int v1,v2,wt;
}
class kruskal
{
public static void main(String args[])throws IOException
{
int i,j,min=0;
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
System.out.println("vertices");
int v=Integer.parseInt(br.readLine());
System.out.println("elements:");
int e=Integer.parseInt(br.readLine());
M ed[]=new M[e+1];
for(i=1;i<=e;i++)
{
ed[i]=new M();
System.out.println("Enter the vertices and the weight of e"+(i)+":");
ed[i].v1=Integer.parseInt(br.readLine());
ed[i].v2=Integer.parseInt(br.readLine());
ed[i].wt=Integer.parseInt(br.readLine());
}
for(i=1;i<=e;i++)
  for(j=1;j<=e;j++)
  {
  if(ed[j].wt>ed[j+1].wt)
  {
   M t=new M();
   t=ed[j];
   ed[j]=ed[j+1];
   ed[j+1]=t;
   }
   }
   int visited[]=new int[v+1];
   for(i=1;i<=v;i++)
   visited[i]=0;
   System.out.println("MINIMUM SPANNING TREE:");
   for(i=1;i<=e;i++)
   {
   if(i>v)
   break;
   else if(visited[ed[i].v1]==0||visited[ed[i].v2]==0)
   {
   System.out.println(ed[i].v1+"-"+ed[i].v2);
   visited[ed[i].v1]=visited[ed[i].v2]=1;
   min+=ed[i].wt;
   }
  }
  System.out.print("MINIMUM COST=" +min);
  return 0;
  }}
