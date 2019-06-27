// juego del gato.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include <windows.h>  

using namespace std;

void gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

void gato(int j, int i)
{
	for (int i = 6; i < 21; i++)
	{
		gotoxy(6, i); cout << "|";
		gotoxy(16, i); cout << "|";
		gotoxy(26, i); cout << "|";
		gotoxy(36, i); cout << "|";
	}
	for (int j = 6; j < 36; j++)
	{
		gotoxy(j, 5); cout << "--";
		gotoxy(j, 10); cout << "--";
		gotoxy(j, 15); cout << "--";
		gotoxy(j, 20); cout << "--";
	}
	gotoxy(7, 6); cout << "1";
	gotoxy(17, 6); cout << "2";
	gotoxy(27, 6); cout << "3";
	gotoxy(7, 11); cout << "4";
	gotoxy(17, 11); cout << "5";
	gotoxy(27, 11); cout << "6";
	gotoxy(7, 16); cout << "7";
	gotoxy(17, 16); cout << "8";
	gotoxy(27, 16); cout << "9";
}

void jugador1(int num)
{
	switch (num)
	{
	case 1:
		gotoxy(10, 7); cout << "o";
		break;
	case 2:
		gotoxy(20, 7); cout << "o";
		break;
	case 3:
		gotoxy(30, 7); cout << "o";
		break;
	case 4:
		gotoxy(10, 12); cout << "o";
		break;
	case 5:
		gotoxy(20, 12); cout << "o";
		break;
	case 6:
		gotoxy(30, 12); cout << "o";
		break;
	case 7:
		gotoxy(10, 17); cout << "o";
		break;
	case 8:
		gotoxy(20, 17); cout << "o";
		break;
	case 9:
		gotoxy(30, 17); cout << "o";
		break;
	}
}

void jugador2(int num)
{
	switch (num)
	{
	case 1:
		gotoxy(10, 7); cout << "x";
		break;
	case 2:
		gotoxy(20, 7); cout << "x";
		break;
	case 3:
		gotoxy(30, 7); cout << "x";
		break;
	case 4:
		gotoxy(10, 12); cout << "x";
		break;
	case 5:
		gotoxy(20, 12); cout << "x";
		break;
	case 6:
		gotoxy(30, 12); cout << "x";
		break;
	case 7:
		gotoxy(10, 17); cout << "x";
		break;
	case 8:
		gotoxy(20, 17); cout << "x";
		break;
	case 9:
		gotoxy(30, 17); cout << "x";
		break;
	}
}

void linea1(int n, int m)
{
	for (int i = 6; i < 20; i++)
	{
		gotoxy(12, i); cout << ":";
	}
}

void linea2(int n, int m)
{
	for (int i = 16; i <20; i++)
	{
		gotoxy(4 + i, i); cout << "/";
	}
	for (int j = 11; j <15; j++)
	{
		gotoxy(34 - j, j); cout << "/";
	}
	for (int m = 6; m <10; m++)
	{
		gotoxy(14 + m, m); cout << "/";
	}
}

void linea3(int n, int m)
{
	for (int i = 6; i < 20; i++)
	{
		gotoxy(32, i); cout << ":";
	}
}

void linea4(int n, int m)
{
	for (int i = 9; i < 31; i++)
	{
		gotoxy(i, 8); cout << "--";
	}
}

void linea5(int n, int m)
{
	for (int i = 9; i < 31; i++)
	{
		gotoxy(i, 13); cout << "--";

	}
}

void linea6(int n, int m)
{
	for (int i = 9; i < 31; i++)
	{
		gotoxy(i, 18); cout << "--";
	}
}

void linea7(int n, int m)
{
	for (int i = 6; i <10; i++)
	{
		gotoxy(4 + i, i); cout << ">";
	}
	for (int j = 11; j <15; j++)
	{
		gotoxy(9 + j, j); cout << ">";
	}
	for (int m = 16; m <20; m++)
	{
		gotoxy(14 + m, m); cout << ">";
	}
}

void linea8(int n, int m)
{
	for (int i = 16; i <20; i++)
	{
		gotoxy(29 - i, i); cout << "/";
	}
	for (int j = 11; j <15; j++)
	{
		gotoxy(34 - j, j); cout << "/";
	}
	for (int m = 6; m <10; m++)
	{
		gotoxy(39 - m, m); cout << "/";
	}
}

void cuadro(int i, int j)
{
	gotoxy(25, 8); cout << char(201);
	gotoxy(50, 8); cout << char(187);
	gotoxy(25, 14); cout << char(200);
	gotoxy(50, 14); cout << char(188);
	for (int i = 26; i < 50; i++)
	{
		gotoxy(i, 8); cout << char(205);
		gotoxy(i, 14); cout << char(205);
	}
	for (int j = 9; j < 14; j++)
	{
		gotoxy(25, j); cout << char(186);
		gotoxy(50, j); cout << char(186);
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int num1 = 0, num2 = 0, i = 0, j = 0, n = 0, m = 0;
	bool ca1 = false, ca2 = false, ca3 = false, ca4 = false, ca5 = false, ca6 = false, ca7 = false, ca8 = false, ca9 = false;
	bool cb1 = false, cb2 = false, cb3 = false, cb4 = false, cb5 = false, cb6 = false, cb7 = false, cb8 = false, cb9 = false;
	int opc = 0, acabar;
	bool casilla1Ocupada = false; bool casilla2Ocupada = false; bool casilla3Ocupada = false; bool casilla4Ocupada = false;
	bool casilla5Ocupada = false; bool casilla6Ocupada = false; bool casill7aOcupada = false; bool casilla8Ocupada = false;
	do{
		ca1 = false, ca2 = false, ca3 = false, ca4 = false, ca5 = false, ca6 = false, ca7 = false, ca8 = false, ca9 = false;
		cb1 = false, cb2 = false, cb3 = false, cb4 = false, cb5 = false, cb6 = false, cb7 = false, cb8 = false, cb9 = false;
		acabar = 1;
		while (acabar == 1)
		{
			gotoxy(10, 2); cout << "JUEGO DEL GATO POR DANIEL";

			gato(i, j);

			gotoxy(40, 6); cout << "Jugador 1 (o)";
			gotoxy(60, 6); cout << "Jugador 2 (x)";
			//Movida 1
			gotoxy(42, 8); cout << "Turno de jugador 1";
			gotoxy(42, 10); cout << "Ingrese  el numero de la casilla    ";
			gotoxy(76, 10); cin >> num1;
			while (num1<1 || num1>9)
			{
				gotoxy(75, 10); cout << "     ";
				gotoxy(76, 10); cin >> num1;
			}
			jugador1(num1);
			if (num1 == 1){
				ca1 = true;
				casilla1Ocupada = true;
			}
			else
			{
				if (num1 == 2){
					ca2 = true;
					casilla1Ocupada = true;
				}
				else
				{
					if (num1 == 3){
						ca3 = true;
						casilla1Ocupada = true;
					}
					else
					{
						if (num1 == 4){
							ca4 = true;
							casilla1Ocupada = true;
						}
						else
						{
							if (num1 == 5){
								ca5 = true;
								casilla1Ocupada = true;

							}
							else
							{
								if (num1 == 6){
									ca6 = true;
									casilla1Ocupada = true;
								}
								else
								{
									if (num1 == 7){
										ca7 = true;
										casilla1Ocupada = true;
									}
									else
									{
										if (num1 == 8){
											ca8 = true;
											casilla1Ocupada = true;
										}
										else
										{
											if (num1 == 9){
												ca9 = true;
												casilla1Ocupada = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			//Movida 2
			gotoxy(42, 8); cout << "Turno de jugador 2";
			gotoxy(42, 10); cout << "Ingrese  el numero de la casilla     ";
			gotoxy(76, 10); cin >> num2;
			while ((num2<1 || num2>9) || (casilla1Ocupada == true))
			{
				gotoxy(75, 10); cout << "     ";
				gotoxy(76, 10); cin >> num2;
			}
			jugador2(num2);
			if (num2 == 1){
				cb1 = true;
				casilla2Ocupada = true;
			}
			else
			{
				if (num2 == 2){
					cb2 = true;
					casilla2Ocupada = true;
				}
				else
				{
					if (num2 == 3){
						cb3 = true;
						casilla2Ocupada = true;
					}
					else
					{
						if (num2 == 4){
							cb4 = true;
							casilla2Ocupada = true;
						}
						else
						{
							if (num2 == 5){
								cb5 = true;
								casilla2Ocupada = true;
							}
							else
							{
								if (num2 == 6){
									cb6 = true;
									casilla2Ocupada = true;
								}
								else
								{
									if (num2 == 7){
										cb7 = true;
										casilla2Ocupada = true;
									}
									else
									{
										if (num2 == 8){
											cb8 = true;
											casilla2Ocupada = true;
										}
										else
										{
											if (num2 == 9){
												cb9 = true;
												casilla2Ocupada = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			//Movida 3
			gotoxy(42, 8); cout << "Turno de jugador 1";
			gotoxy(42, 10); cout << "Ingrese  el numero de la casilla    ";
			gotoxy(76, 10); cin >> num1;
			while ((num1<1 || num1>9) || (casilla2Ocupada == true))
			{
				gotoxy(75, 10); cout << "     ";
				gotoxy(76, 10); cin >> num1;
			}
			jugador1(num1);
			if (num1 == 1){
				ca1 = true;
				casilla3Ocupada == true;
			}
			else
			{
				if (num1 == 2){
					ca2 = true;
					casilla3Ocupada == true;
				}
				else
				{
					if (num1 == 3){
						ca3 = true;
						casilla3Ocupada == true;
					}
					else
					{
						if (num1 == 4){
							ca4 = true;
							casilla3Ocupada == true;
						}
						else
						{
							if (num1 == 5){
								ca5 = true;
								casilla3Ocupada == true;
							}
							else
							{
								if (num1 == 6){
									ca6 = true;
									casilla3Ocupada == true;
								}
								else
								{
									if (num1 == 7){
										ca7 = true;
										casilla3Ocupada == true;
									}
									else
									{
										if (num1 == 8){
											ca8 = true;
											casilla3Ocupada == true;
										}
										else
										{
											if (num1 == 9){
												ca9 = true;
												casilla3Ocupada == true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			//Movida 4
			gotoxy(42, 8); cout << "Turno de jugador 2";
			gotoxy(42, 10); cout << "Ingrese  el numero de la casilla     ";
			gotoxy(76, 10); cin >> num2;
			while (num2<1 || num2>9)
			{
				gotoxy(75, 10); cout << "     ";
				gotoxy(76, 10); cin >> num2;
			}
			jugador2(num2);
			if (num2 == 1){
				cb1 = true;
				casilla4Ocupada = true;
			}
			else
			{
				if (num2 == 2){
					cb2 = true;
					casilla4Ocupada = true;
				}
				else
				{
					if (num2 == 3){
						cb3 = true;
						casilla4Ocupada = true;
					}
					else
					{
						if (num2 == 4){
							cb4 = true;
							casilla4Ocupada = true;
						}
						else
						{
							if (num2 == 5){
								cb5 = true;
								casilla4Ocupada = true;
							}
							else
							{
								if (num2 == 6){
									cb6 = true;
									casilla4Ocupada = true;
								}
								else
								{
									if (num2 == 7){
										cb7 = true;
										casilla4Ocupada = true;
									}
									else
									{
										if (num2 == 8){
											cb8 = true;
											casilla4Ocupada = true;
										}
										else
										{
											if (num2 == 9){
												cb9 = true;
												casilla4Ocupada = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			//Movida 5
			gotoxy(42, 8); cout << "Turno de jugador 1";
			gotoxy(42, 10); cout << "Ingrese  el numero de la casilla    ";
			gotoxy(76, 10); cin >> num1;
			while (num1<1 || num1>9)
			{
				gotoxy(75, 10); cout << "     ";
				gotoxy(76, 10); cin >> num1;
			}
			jugador1(num1);
			if (num1 == 1){
				ca1 = true;
			}
			else
			{
				if (num1 == 2){
					ca2 = true;
				}
				else
				{
					if (num1 == 3){
						ca3 = true;
					}
					else
					{
						if (num1 == 4){
							ca4 = true;
						}
						else
						{
							if (num1 == 5){
								ca5 = true;
							}
							else
							{
								if (num1 == 6){
									ca6 = true;
								}
								else
								{
									if (num1 == 7){
										ca7 = true;
									}
									else
									{
										if (num1 == 8){
											ca8 = true;
										}
										else
										{
											if (num1 == 9){
												ca9 = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (ca1 == true && ca4 == true && ca7 == true)
			{
				gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
				linea1(n, m); gotoxy(40, 17); system("pause");
				acabar = 2;
			}
			else
			{
				if (ca2 == true && ca5 == true && ca8 == true)
				{
					gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
					linea2(n, m); gotoxy(40, 17); system("pause");
					acabar = 2;
				}
				else
				{
					if (ca3 == true && ca6 == true && ca9 == true)
					{
						gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
						linea3(n, m); gotoxy(40, 17); system("pause");
						acabar = 2;
					}
					else
					{
						if (ca1 == true && ca2 == true && ca3 == true)
						{
							gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
							linea4(n, m); gotoxy(40, 17); system("pause");
							acabar = 2;
						}
						else
						{
							if (ca4 == true && ca5 == true && ca6 == true)
							{
								gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
								linea5(n, m); gotoxy(40, 17); system("pause");
								acabar = 2;
							}
							else
							{
								if (ca7 == true && ca8 == true && ca9 == true)
								{
									gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
									linea6(n, m); gotoxy(40, 17); system("pause");
									acabar = 2;
								}
								else
								{
									if (ca1 == true && ca5 == true && ca9 == true)
									{
										gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
										linea7(n, m); gotoxy(40, 17); system("pause");
										acabar = 2;
									}
									else
									{
										if (ca7 == true && ca5 == true && ca3 == true)
										{
											gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
											linea8(m, n); gotoxy(40, 17); system("pause");
											acabar = 2;
										}
										else
										{
											//Movida 6
											gotoxy(42, 8); cout << "Turno de jugador 2";
											gotoxy(42, 10); cout << "Ingrese  el numero de la casilla     ";
											gotoxy(76, 10); cin >> num2;
											while (num2<1 || num2>9)
											{
												gotoxy(75, 10); cout << "     ";
												gotoxy(76, 10); cin >> num2;
											}
											jugador2(num2);
											if (num2 == 1){
												cb1 = true;
											}
											else
											{
												if (num2 == 2){
													cb2 = true;
												}
												else
												{
													if (num2 == 3){
														cb3 = true;
													}
													else
													{
														if (num2 == 4){
															cb4 = true;
														}
														else
														{
															if (num2 == 5){
																cb5 = true;
															}
															else
															{
																if (num2 == 6){
																	cb6 = true;
																}
																else
																{
																	if (num2 == 7){
																		cb7 = true;
																	}
																	else
																	{
																		if (num2 == 8){
																			cb8 = true;
																		}
																		else
																		{
																			if (num2 == 9){
																				cb9 = true;
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
											if (cb1 == true && cb4 == true && cb7 == true)
											{
												gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
												linea1(n, m); gotoxy(40, 17); system("pause");
												acabar = 2;
											}
											else
											{
												if (cb2 == true && cb5 == true && cb8 == true)
												{
													gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
													linea2(n, m); gotoxy(40, 17); system("pause");
													acabar = 2;
												}
												else
												{
													if (cb3 == true && cb6 == true && cb9 == true)
													{
														gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
														linea3(n, m); gotoxy(40, 17); system("pause");
														acabar = 2;
													}
													else
													{
														if (cb1 == true && cb2 == true && cb3 == true)
														{
															gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
															linea4(n, m); gotoxy(40, 17); system("pause");
															acabar = 2;
														}
														else
														{
															if (cb4 == true && cb5 == true && cb6 == true)
															{
																gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
																linea5(n, m); gotoxy(40, 17); system("pause");
																acabar = 2;
															}
															else
															{
																if (cb7 == true && cb8 == true && cb9 == true)
																{
																	gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
																	linea6(n, m); gotoxy(40, 17); system("pause");
																	acabar = 2;
																}
																else
																{
																	if (cb1 == true && cb5 == true && cb9 == true)
																	{
																		gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
																		linea7(n, m); gotoxy(40, 17); system("pause");
																		acabar = 2;
																	}
																	else
																	{
																		if (cb7 == true && cb5 == true && cb3 == true)
																		{
																			gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
																			linea8(n, m); gotoxy(40, 17); system("pause");
																			acabar = 2;
																		}
																		else
																		{
																			//Movida 7
																			gotoxy(42, 8); cout << "Turno de jugador 1";
																			gotoxy(42, 10); cout << "Ingrese  el numero de la casilla    ";
																			gotoxy(76, 10); cin >> num1;
																			while (num1<1 || num1>9)
																			{
																				gotoxy(75, 10); cout << "     ";
																				gotoxy(76, 10); cin >> num1;
																			}
																			jugador1(num1);
																			if (num1 == 1){
																				ca1 = true;
																			}
																			else
																			{
																				if (num1 == 2){
																					ca2 = true;
																				}
																				else
																				{
																					if (num1 == 3){
																						ca3 = true;
																					}
																					else
																					{
																						if (num1 == 4){
																							ca4 = true;
																						}
																						else
																						{
																							if (num1 == 5){
																								ca5 = true;
																							}
																							else
																							{
																								if (num1 == 6){
																									ca6 = true;
																								}
																								else
																								{
																									if (num1 == 7){
																										ca7 = true;
																									}
																									else
																									{
																										if (num1 == 8){
																											ca8 = true;
																										}
																										else
																										{
																											if (num1 == 9){
																												ca9 = true;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																			if (ca1 == true && ca4 == true && ca7 == true)
																			{
																				gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
																				linea1(n, m); gotoxy(40, 17); system("pause");
																				acabar = 2;
																			}
																			else
																			{
																				if (ca2 == true && ca5 == true && ca8 == true)
																				{
																					gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
																					linea2(n, m); gotoxy(40, 17); system("pause");
																					acabar = 2;
																				}
																				else
																				{
																					if (ca3 == true && ca6 == true && ca9 == true)
																					{
																						gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
																						linea3(n, m); gotoxy(40, 17); system("pause");
																						acabar = 2;
																					}
																					else
																					{
																						if (ca1 == true && ca2 == true && ca3 == true)
																						{
																							gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
																							linea4(n, m); gotoxy(40, 17); system("pause");
																							acabar = 2;
																						}
																						else
																						{
																							if (ca4 == true && ca5 == true && ca6 == true)
																							{
																								gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
																								linea5(n, m); gotoxy(40, 17); system("pause");
																								acabar = 2;
																							}
																							else
																							{
																								if (ca7 == true && ca8 == true && ca9 == true)
																								{
																									gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
																									linea6(n, m); gotoxy(40, 17); system("pause");
																									acabar = 2;
																								}
																								else
																								{
																									if (ca1 == true && ca5 == true && ca9 == true)
																									{
																										gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
																										linea7(n, m); gotoxy(40, 17); system("pause");
																										acabar = 2;
																									}
																									else
																									{
																										if (ca7 == true && ca5 == true && ca3 == true)
																										{
																											gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
																											linea8(m, n); gotoxy(40, 17); system("pause");
																											acabar = 2;
																										}
																										else
																										{
																											//Movida 8
																											gotoxy(42, 8); cout << "Turno de jugador 2";
																											gotoxy(42, 10); cout << "Ingrese  el numero de la casilla     ";
																											gotoxy(76, 10); cin >> num2;
																											while (num2<1 || num2>9)
																											{
																												gotoxy(75, 10); cout << "     ";
																												gotoxy(76, 10); cin >> num2;
																											}
																											jugador2(num2);
																											if (num2 == 1){
																												cb1 = true;
																											}
																											else
																											{
																												if (num2 == 2){
																													cb2 = true;
																												}
																												else
																												{
																													if (num2 == 3){
																														cb3 = true;
																													}
																													else
																													{
																														if (num2 == 4){
																															cb4 = true;
																														}
																														else
																														{
																															if (num2 == 5){
																																cb5 = true;
																															}
																															else
																															{
																																if (num2 == 6){
																																	cb6 = true;
																																}
																																else
																																{
																																	if (num2 == 7){
																																		cb7 = true;
																																	}
																																	else
																																	{
																																		if (num2 == 8){
																																			cb8 = true;
																																		}
																																		else
																																		{
																																			if (num2 == 9){
																																				cb9 = true;
																																			}
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																											if (cb1 == true && cb4 == true && cb7 == true)
																											{
																												gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
																												linea1(n, m); gotoxy(40, 17); system("pause");
																												acabar = 2;
																											}
																											else
																											{

																												if (cb2 == true && cb5 == true && cb8 == true)
																												{
																													gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
																													linea2(n, m); gotoxy(40, 17); system("pause");
																													acabar = 2;
																												}
																												else
																												{
																													if (cb3 == true && cb6 == true && cb9 == true)
																													{
																														gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
																														linea3(n, m); gotoxy(40, 17); system("pause");
																														acabar = 2;
																													}
																													else
																													{
																														if (cb1 == true && cb2 == true && cb3 == true)
																														{
																															gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
																															linea4(n, m); gotoxy(40, 17); system("pause");
																															acabar = 2;
																														}
																														else
																														{
																															if (cb4 == true && cb5 == true && cb6 == true)
																															{
																																gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
																																linea5(n, m); gotoxy(40, 17); system("pause");
																																acabar = 2;
																															}
																															else
																															{
																																if (cb7 == true && cb8 == true && cb9 == true)
																																{
																																	gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
																																	linea6(n, m); gotoxy(40, 17); system("pause");
																																	acabar = 2;
																																}
																																else
																																{
																																	if (cb1 == true && cb5 == true && cb9 == true)
																																	{
																																		gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
																																		linea7(n, m); gotoxy(40, 17); system("pause");
																																		acabar = 2;
																																	}
																																	else
																																	{
																																		if (cb7 == true && cb5 == true && cb3 == true)
																																		{
																																			gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 2 GANO !!!  ";
																																			linea8(n, m); gotoxy(40, 17); system("pause");
																																			acabar = 2;
																																		}
																																		else
																																		{
																																			//Movida 9
																																			gotoxy(42, 8); cout << "Turno de jugador 1";
																																			gotoxy(42, 10); cout << "Ingrese  el numero de la casilla    ";
																																			gotoxy(76, 10); cin >> num1;
																																			while (num1<1 || num1>9)
																																			{
																																				gotoxy(75, 10); cout << "     ";
																																				gotoxy(76, 10); cin >> num1;
																																			}
																																			jugador1(num1);
																																			if (num1 == 1){
																																				ca1 = true;
																																			}
																																			else
																																			{
																																				if (num1 == 2){
																																					ca2 = true;
																																				}
																																				else
																																				{
																																					if (num1 == 3){
																																						ca3 = true;
																																					}
																																					else
																																					{
																																						if (num1 == 4){
																																							ca4 = true;
																																						}
																																						else
																																						{
																																							if (num1 == 5){
																																								ca5 = true;
																																							}
																																							else
																																							{
																																								if (num1 == 6){
																																									ca6 = true;
																																								}
																																								else
																																								{
																																									if (num1 == 7){
																																										ca7 = true;
																																									}
																																									else
																																									{
																																										if (num1 == 8){
																																											ca8 = true;
																																										}
																																										else
																																										{
																																											if (num1 == 9){
																																												ca9 = true;
																																											}
																																										}
																																									}
																																								}
																																							}
																																						}
																																					}
																																				}
																																			}


																																			if (ca1 == true && ca4 == true && ca7 == true)
																																			{
																																				gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
																																				linea1(n, m); gotoxy(40, 17); system("pause");
																																				acabar = 2;
																																			}
																																			else
																																			{
																																				if (ca2 == true && ca5 == true && ca8 == true)
																																				{
																																					gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";																																					
																																					linea2(n, m); gotoxy(40, 17); system("pause");
																																					acabar = 2;
																																				}
																																				else
																																				{
																																					if (ca3 == true && ca6 == true && ca9 == true)
																																					{
																																						gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
																																						system("pause");
																																						linea3(n, m);
																																						acabar = 2;
																																					}
																																					else
																																					{
																																						if (ca1 == true && ca2 == true && ca3 == true)
																																						{
																																							gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";																																							
																																							linea4(n, m); gotoxy(40, 17); system("pause");
																																							acabar = 2;
																																						}
																																						else
																																						{
																																							if (ca4 == true && ca5 == true && ca6 == true)
																																							{
																																								gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";																																								
																																								linea5(n, m); gotoxy(40, 17); system("pause");
																																								acabar = 2;
																																							}
																																							else
																																							{
																																								if (ca7 == true && ca8 == true && ca9 == true)
																																								{
																																									gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";																																									
																																									linea6(n, m); gotoxy(40, 17); system("pause");
																																									acabar = 2;
																																								}
																																								else
																																								{
																																									if (ca1 == true && ca5 == true && ca9 == true)
																																									{
																																										gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
																																										linea7(n, m); gotoxy(40, 17); system("pause");
																																										acabar = 2;
																																									}
																																									else
																																									{
																																										if (ca7 == true && ca5 == true && ca3 == true)
																																										{
																																											gotoxy(42, 15); cout << "¡¡¡ EL JUGADOR 1 GANO !!!  ";
																																											linea8(m, n); gotoxy(40, 17); system("pause");
																																											acabar = 2;
																																										}
																																										else
																																										{
																																											gotoxy(42, 15); cout << " EMPATADO  ";
																																											gotoxy(40, 20); gotoxy(40, 17); system("pause");
																																											system("cls");
																																											acabar = 2;
																																										}
																																									}
																																								}
																																							}
																																						}
																																					}
																																				}
																																			}
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

		system("cls");
		cuadro(m, n);
		gotoxy(29, 10); cout << "Desea reiniciar?";
		gotoxy(29, 12); cout << "si=1  no=2   (   )";
		gotoxy(44, 12); cin >> opc;
		while (opc<1 || opc>2)
		{
			gotoxy(29, 12); cout << "si=1  no=2   (   )";
			gotoxy(44, 12); cin >> opc;
		}
		system("cls");
	} while (opc == 1);
	system("cls");
	cuadro(i, j);
	gotoxy(29, 12); cout << "HECHO POR DANIEL";
	_getch();
	return 0;
}