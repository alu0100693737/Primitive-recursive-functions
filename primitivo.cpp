/*Practica Complejidad Computacional
 * Author: Iván García Campos
 * */


//funciones recursivas básicas
int Z(int valor) //funciona
{
  return 0;
}

int S(int valor)//funciona
{  
  return valor+1;
}

int P(int a[], int pos)//funciona
{  return a[pos];
}


//funciones primitivas recursivas

int uno(int x) //funciona
{  
  return S(Z(x));
}

int suma(int x, int y)
{
  if (y==0)
    return x;
  else
  { y--;
    int a[] = {x, y, suma(x,y)};
    S(P(a, 2));
  }
}

int producto(int x, int y)
{
  if (y==0)
    return Z(x);
  else
  {
    y--;
    int a[] = {x, y, producto(x, y)};
    suma(P(a,0), P(a,2));
  }
  
}

int potencia(int x, int y)
{
  if (y==0)
    return uno(x); 
  else 
  { y--;
    int a[] = {x, y, potencia(x, y)};
    producto(P(a,0),P(a,2));
  }
}
 