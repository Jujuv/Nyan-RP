/*----------------------------------------------------------------------------*\
					==========================
					 y_colours - X11 colours!
					==========================
Description:
	This holds the colour information that used to be part of the text system
	but which is far more useful than just for text.  This now supports the full
	set of X11 colours, both by name and by definition.  You can also define
	your own if you so choose (up to 32 - should be enough given that this
	includes the X11 colours).
Legal:
	Version: MPL 1.1
	
	The contents of this file are subject to the Mozilla Public License Version 
	1.1 (the "License"); you may not use this file except in compliance with 
	the License. You may obtain a copy of the License at 
	http://www.mozilla.org/MPL/
	
	Software distributed under the License is distributed on an "AS IS" basis,
	WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
	for the specific language governing rights and limitations under the
	License.
	
	The Original Code is the YSI colourparse include.
	
	The Initial Developer of the Original Code is Alex "Y_Less" Cole.
	Portions created by the Initial Developer are Copyright (C) 2011
	the Initial Developer. All Rights Reserved.
	
	Contributors:
		ZeeX, koolk, JoeBullet/Google63, g_aSlice/Slice
	
	Thanks:
		JoeBullet/Google63 - Handy arbitrary ASM jump code using SCTRL.
		ZeeX - Very productive conversations.
		koolk - IsPlayerinAreaEx code.
		TheAlpha - Danish translation.
		breadfish - German translation.
		Fireburn - Dutch translation.
		yom - French translation.
		50p - Polish translation.
		Zamaroht - Spanish translation.
		Dracoblue, sintax, mabako, Xtreme, other coders - Producing other modes
			for me to strive to better.
		Pixels^ - Running XScripters where the idea was born.
		Matite - Pestering me to release it and using it.
	
	Very special thanks to:
		Thiadmer - PAWN, whose limits continue to amaze me!
		Kye/Kalcor - SA:MP.
		SA:MP Team past, present and future - SA:MP.
	
Version:
	1.0
Changelog:
	29/11/10:
		Added the ability to use "X11" prefixes in strings.
		Added colourspace resolution for converting {FF0000} to ~r~.
	25/11/10:
		First version.
\*----------------------------------------------------------------------------*/

stock Colours_DoHashParse(const str[], &idx)
{
	switch (str[0] | 0x20)
	{
		case 'a':
		{
			switch (str[1] | 0x20)
			{
				case 'l':
				{
					if (!str[2] || strcmp(str[2], !"ICE", true, 3))
					{
						return -1;
					}
					switch (str[5] | 0x20)
					{
						case ' ':
						{
							if (str[5])
							{
								if (str[6] && !strcmp(str[6], !"BLUE", true, 4))
								{
									idx += 10;
									return X11_ALICE_BLUE >>> 8;
								}
							}
						}
						case '_' | 0x20:
						{
							if (str[6] && !strcmp(str[6], !"BLUE", true, 4))
							{
								idx += 10;
								return X11_ALICE_BLUE >>> 8;
							}
						}
						case 'b':
						{
							if (str[6] && !strcmp(str[6], !"LUE", true, 3))
							{
								idx += 9;
								return X11_ALICEBLUE >>> 8;
							}
						}
					}
				}
				case 'n':
				{
					if (!str[2] || strcmp(str[2], !"TIQUE", true, 5))
					{
						return -1;
					}
					switch (str[7] | 0x20)
					{
						case ' ':
						{
							if (str[7])
							{
								if (!str[8] || strcmp(str[8], !"WHITE", true, 5))
								{
									return -1;
								}
								switch (str[13] | 0x20)
								{
									case ' ':
									{
										if (str[13])
										{
											switch (str[14] | 0x20)
											{
												case '1':
												{
													idx += 15;
													return X11_ANTIQUE_WHITE_1 >>> 8;
												}
												case '2':
												{
													idx += 15;
													return X11_ANTIQUE_WHITE_2 >>> 8;
												}
												case '3':
												{
													idx += 15;
													return X11_ANTIQUE_WHITE_3 >>> 8;
												}
												case '4':
												{
													idx += 15;
													return X11_ANTIQUE_WHITE_4 >>> 8;
												}
											}
										}
									}
									case '_' | 0x20:
									{
										switch (str[14] | 0x20)
										{
											case '1':
											{
												idx += 15;
												return X11_ANTIQUE_WHITE_1 >>> 8;
											}
											case '2':
											{
												idx += 15;
												return X11_ANTIQUE_WHITE_2 >>> 8;
											}
											case '3':
											{
												idx += 15;
												return X11_ANTIQUE_WHITE_3 >>> 8;
											}
											case '4':
											{
												idx += 15;
												return X11_ANTIQUE_WHITE_4 >>> 8;
											}
										}
									}
								}
								idx += 13;
								return X11_ANTIQUE_WHITE >>> 8;
							}
						}
						case '_' | 0x20:
						{
							if (!str[8] || strcmp(str[8], !"WHITE", true, 5))
							{
								return -1;
							}
							switch (str[13] | 0x20)
							{
								case ' ':
								{
									if (str[13])
									{
										switch (str[14] | 0x20)
										{
											case '1':
											{
												idx += 15;
												return X11_ANTIQUE_WHITE_1 >>> 8;
											}
											case '2':
											{
												idx += 15;
												return X11_ANTIQUE_WHITE_2 >>> 8;
											}
											case '3':
											{
												idx += 15;
												return X11_ANTIQUE_WHITE_3 >>> 8;
											}
											case '4':
											{
												idx += 15;
												return X11_ANTIQUE_WHITE_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[14] | 0x20)
									{
										case '1':
										{
											idx += 15;
											return X11_ANTIQUE_WHITE_1 >>> 8;
										}
										case '2':
										{
											idx += 15;
											return X11_ANTIQUE_WHITE_2 >>> 8;
										}
										case '3':
										{
											idx += 15;
											return X11_ANTIQUE_WHITE_3 >>> 8;
										}
										case '4':
										{
											idx += 15;
											return X11_ANTIQUE_WHITE_4 >>> 8;
										}
									}
								}
							}
							idx += 13;
							return X11_ANTIQUE_WHITE >>> 8;
						}
						case 'w':
						{
							if (!str[8] || strcmp(str[8], !"HITE", true, 4))
							{
								return -1;
							}
							switch (str[12] | 0x20)
							{
								case '1':
								{
									idx += 13;
									return X11_ANTIQUEWHITE1 >>> 8;
								}
								case '2':
								{
									idx += 13;
									return X11_ANTIQUEWHITE2 >>> 8;
								}
								case '3':
								{
									idx += 13;
									return X11_ANTIQUEWHITE3 >>> 8;
								}
								case '4':
								{
									idx += 13;
									return X11_ANTIQUEWHITE4 >>> 8;
								}
							}
							idx += 12;
							return X11_ANTIQUEWHITE >>> 8;
						}
					}
				}
				case 'q':
				{
					if (!str[2] || strcmp(str[2], !"UAMARINE", true, 8))
					{
						return -1;
					}
					switch (str[10] | 0x20)
					{
						case ' ':
						{
							if (str[10])
							{
								switch (str[11] | 0x20)
								{
									case '1':
									{
										idx += 12;
										return X11_AQUAMARINE_1 >>> 8;
									}
									case '2':
									{
										idx += 12;
										return X11_AQUAMARINE_2 >>> 8;
									}
									case '3':
									{
										idx += 12;
										return X11_AQUAMARINE_3 >>> 8;
									}
									case '4':
									{
										idx += 12;
										return X11_AQUAMARINE_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[11] | 0x20)
							{
								case '1':
								{
									idx += 12;
									return X11_AQUAMARINE_1 >>> 8;
								}
								case '2':
								{
									idx += 12;
									return X11_AQUAMARINE_2 >>> 8;
								}
								case '3':
								{
									idx += 12;
									return X11_AQUAMARINE_3 >>> 8;
								}
								case '4':
								{
									idx += 12;
									return X11_AQUAMARINE_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 11;
							return X11_AQUAMARINE1 >>> 8;
						}
						case '2':
						{
							idx += 11;
							return X11_AQUAMARINE2 >>> 8;
						}
						case '3':
						{
							idx += 11;
							return X11_AQUAMARINE3 >>> 8;
						}
						case '4':
						{
							idx += 11;
							return X11_AQUAMARINE4 >>> 8;
						}
					}
					idx += 10;
					return X11_AQUAMARINE >>> 8;
				}
				case 'z':
				{
					if (!str[2] || strcmp(str[2], !"URE", true, 3))
					{
						return -1;
					}
					switch (str[5] | 0x20)
					{
						case ' ':
						{
							if (str[5])
							{
								switch (str[6] | 0x20)
								{
									case '1':
									{
										idx += 7;
										return X11_AZURE_1 >>> 8;
									}
									case '2':
									{
										idx += 7;
										return X11_AZURE_2 >>> 8;
									}
									case '3':
									{
										idx += 7;
										return X11_AZURE_3 >>> 8;
									}
									case '4':
									{
										idx += 7;
										return X11_AZURE_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[6] | 0x20)
							{
								case '1':
								{
									idx += 7;
									return X11_AZURE_1 >>> 8;
								}
								case '2':
								{
									idx += 7;
									return X11_AZURE_2 >>> 8;
								}
								case '3':
								{
									idx += 7;
									return X11_AZURE_3 >>> 8;
								}
								case '4':
								{
									idx += 7;
									return X11_AZURE_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 6;
							return X11_AZURE1 >>> 8;
						}
						case '2':
						{
							idx += 6;
							return X11_AZURE2 >>> 8;
						}
						case '3':
						{
							idx += 6;
							return X11_AZURE3 >>> 8;
						}
						case '4':
						{
							idx += 6;
							return X11_AZURE4 >>> 8;
						}
					}
					idx += 5;
					return X11_AZURE >>> 8;
				}
			}
		}
		case 'b':
		{
			switch (str[1] | 0x20)
			{
				case 'e':
				{
					if (str[2] && !strcmp(str[2], !"IGE", true, 3))
					{
						idx += 5;
						return X11_BEIGE >>> 8;
					}
				}
				case 'i':
				{
					if (!str[2] || strcmp(str[2], !"SQUE", true, 4))
					{
						return -1;
					}
					switch (str[6] | 0x20)
					{
						case ' ':
						{
							if (str[6])
							{
								switch (str[7] | 0x20)
								{
									case '1':
									{
										idx += 8;
										return X11_BISQUE_1 >>> 8;
									}
									case '2':
									{
										idx += 8;
										return X11_BISQUE_2 >>> 8;
									}
									case '3':
									{
										idx += 8;
										return X11_BISQUE_3 >>> 8;
									}
									case '4':
									{
										idx += 8;
										return X11_BISQUE_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[7] | 0x20)
							{
								case '1':
								{
									idx += 8;
									return X11_BISQUE_1 >>> 8;
								}
								case '2':
								{
									idx += 8;
									return X11_BISQUE_2 >>> 8;
								}
								case '3':
								{
									idx += 8;
									return X11_BISQUE_3 >>> 8;
								}
								case '4':
								{
									idx += 8;
									return X11_BISQUE_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 7;
							return X11_BISQUE1 >>> 8;
						}
						case '2':
						{
							idx += 7;
							return X11_BISQUE2 >>> 8;
						}
						case '3':
						{
							idx += 7;
							return X11_BISQUE3 >>> 8;
						}
						case '4':
						{
							idx += 7;
							return X11_BISQUE4 >>> 8;
						}
					}
					idx += 6;
					return X11_BISQUE >>> 8;
				}
				case 'l':
				{
					switch (str[2] | 0x20)
					{
						case 'a':
						{
							switch (str[3] | 0x20)
							{
								case 'c':
								{
									if (str[4] == 'K')
									{
										idx += 5;
										return X11_BLACK >>> 8;
									}
								}
								case 'n':
								{
									if (!str[4] || strcmp(str[4], !"CHED", true, 4))
									{
										return -1;
									}
									switch (str[8] | 0x20)
									{
										case ' ':
										{
											if (str[8])
											{
												if (str[9] && !strcmp(str[9], !"ALMOND", true, 6))
												{
													idx += 15;
													return X11_BLANCHED_ALMOND >>> 8;
												}
											}
										}
										case '_' | 0x20:
										{
											if (str[9] && !strcmp(str[9], !"ALMOND", true, 6))
											{
												idx += 15;
												return X11_BLANCHED_ALMOND >>> 8;
											}
										}
										case 'a':
										{
											if (str[9] && !strcmp(str[9], !"LMOND", true, 5))
											{
												idx += 14;
												return X11_BLANCHEDALMOND >>> 8;
											}
										}
									}
								}
							}
						}
						case 'u':
						{
							if (str[3] != 'E')
							{
								return -1;
							}
							switch (str[4] | 0x20)
							{
								case ' ':
								{
									if (str[4])
									{
										switch (str[5] | 0x20)
										{
											case '1':
											{
												idx += 6;
												return X11_BLUE_1 >>> 8;
											}
											case '2':
											{
												idx += 6;
												return X11_BLUE_2 >>> 8;
											}
											case '3':
											{
												idx += 6;
												return X11_BLUE_3 >>> 8;
											}
											case '4':
											{
												idx += 6;
												return X11_BLUE_4 >>> 8;
											}
											case 'v':
											{
												if (str[6] && !strcmp(str[6], !"IOLET", true, 5))
												{
													idx += 11;
													return X11_BLUE_VIOLET >>> 8;
												}
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[5] | 0x20)
									{
										case '1':
										{
											idx += 6;
											return X11_BLUE_1 >>> 8;
										}
										case '2':
										{
											idx += 6;
											return X11_BLUE_2 >>> 8;
										}
										case '3':
										{
											idx += 6;
											return X11_BLUE_3 >>> 8;
										}
										case '4':
										{
											idx += 6;
											return X11_BLUE_4 >>> 8;
										}
										case 'v':
										{
											if (str[6] && !strcmp(str[6], !"IOLET", true, 5))
											{
												idx += 11;
												return X11_BLUE_VIOLET >>> 8;
											}
										}
									}
								}
								case '1':
								{
									idx += 5;
									return X11_BLUE1 >>> 8;
								}
								case '2':
								{
									idx += 5;
									return X11_BLUE2 >>> 8;
								}
								case '3':
								{
									idx += 5;
									return X11_BLUE3 >>> 8;
								}
								case '4':
								{
									idx += 5;
									return X11_BLUE4 >>> 8;
								}
								case 'v':
								{
									if (str[5] && !strcmp(str[5], !"IOLET", true, 5))
									{
										idx += 10;
										return X11_BLUEVIOLET >>> 8;
									}
								}
							}
							idx += 4;
							return X11_BLUE >>> 8;
						}
					}
				}
				case 'r':
				{
					if (!str[2] || strcmp(str[2], !"OWN", true, 3))
					{
						return -1;
					}
					switch (str[5] | 0x20)
					{
						case ' ':
						{
							if (str[5])
							{
								switch (str[6] | 0x20)
								{
									case '1':
									{
										idx += 7;
										return X11_BROWN_1 >>> 8;
									}
									case '2':
									{
										idx += 7;
										return X11_BROWN_2 >>> 8;
									}
									case '3':
									{
										idx += 7;
										return X11_BROWN_3 >>> 8;
									}
									case '4':
									{
										idx += 7;
										return X11_BROWN_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[6] | 0x20)
							{
								case '1':
								{
									idx += 7;
									return X11_BROWN_1 >>> 8;
								}
								case '2':
								{
									idx += 7;
									return X11_BROWN_2 >>> 8;
								}
								case '3':
								{
									idx += 7;
									return X11_BROWN_3 >>> 8;
								}
								case '4':
								{
									idx += 7;
									return X11_BROWN_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 6;
							return X11_BROWN1 >>> 8;
						}
						case '2':
						{
							idx += 6;
							return X11_BROWN2 >>> 8;
						}
						case '3':
						{
							idx += 6;
							return X11_BROWN3 >>> 8;
						}
						case '4':
						{
							idx += 6;
							return X11_BROWN4 >>> 8;
						}
					}
					idx += 5;
					return X11_BROWN >>> 8;
				}
				case 'u':
				{
					if (!str[2] || strcmp(str[2], !"RLYWOOD", true, 7))
					{
						return -1;
					}
					switch (str[9] | 0x20)
					{
						case ' ':
						{
							if (str[9])
							{
								switch (str[10] | 0x20)
								{
									case '1':
									{
										idx += 11;
										return X11_BURLYWOOD_1 >>> 8;
									}
									case '2':
									{
										idx += 11;
										return X11_BURLYWOOD_2 >>> 8;
									}
									case '3':
									{
										idx += 11;
										return X11_BURLYWOOD_3 >>> 8;
									}
									case '4':
									{
										idx += 11;
										return X11_BURLYWOOD_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[10] | 0x20)
							{
								case '1':
								{
									idx += 11;
									return X11_BURLYWOOD_1 >>> 8;
								}
								case '2':
								{
									idx += 11;
									return X11_BURLYWOOD_2 >>> 8;
								}
								case '3':
								{
									idx += 11;
									return X11_BURLYWOOD_3 >>> 8;
								}
								case '4':
								{
									idx += 11;
									return X11_BURLYWOOD_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 10;
							return X11_BURLYWOOD1 >>> 8;
						}
						case '2':
						{
							idx += 10;
							return X11_BURLYWOOD2 >>> 8;
						}
						case '3':
						{
							idx += 10;
							return X11_BURLYWOOD3 >>> 8;
						}
						case '4':
						{
							idx += 10;
							return X11_BURLYWOOD4 >>> 8;
						}
					}
					idx += 9;
					return X11_BURLYWOOD >>> 8;
				}
			}
		}
		case 'c':
		{
			switch (str[1] | 0x20)
			{
				case 'a':
				{
					if (!str[2] || strcmp(str[2], !"DET", true, 3))
					{
						return -1;
					}
					switch (str[5] | 0x20)
					{
						case ' ':
						{
							if (str[5])
							{
								if (!str[6] || strcmp(str[6], !"BLUE", true, 4))
								{
									return -1;
								}
								switch (str[10] | 0x20)
								{
									case ' ':
									{
										if (str[10])
										{
											switch (str[11] | 0x20)
											{
												case '1':
												{
													idx += 12;
													return X11_CADET_BLUE_1 >>> 8;
												}
												case '2':
												{
													idx += 12;
													return X11_CADET_BLUE_2 >>> 8;
												}
												case '3':
												{
													idx += 12;
													return X11_CADET_BLUE_3 >>> 8;
												}
												case '4':
												{
													idx += 12;
													return X11_CADET_BLUE_4 >>> 8;
												}
											}
										}
									}
									case '_' | 0x20:
									{
										switch (str[11] | 0x20)
										{
											case '1':
											{
												idx += 12;
												return X11_CADET_BLUE_1 >>> 8;
											}
											case '2':
											{
												idx += 12;
												return X11_CADET_BLUE_2 >>> 8;
											}
											case '3':
											{
												idx += 12;
												return X11_CADET_BLUE_3 >>> 8;
											}
											case '4':
											{
												idx += 12;
												return X11_CADET_BLUE_4 >>> 8;
											}
										}
									}
								}
								idx += 10;
								return X11_CADET_BLUE >>> 8;
							}
						}
						case '_' | 0x20:
						{
							if (!str[6] || strcmp(str[6], !"BLUE", true, 4))
							{
								return -1;
							}
							switch (str[10] | 0x20)
							{
								case ' ':
								{
									if (str[10])
									{
										switch (str[11] | 0x20)
										{
											case '1':
											{
												idx += 12;
												return X11_CADET_BLUE_1 >>> 8;
											}
											case '2':
											{
												idx += 12;
												return X11_CADET_BLUE_2 >>> 8;
											}
											case '3':
											{
												idx += 12;
												return X11_CADET_BLUE_3 >>> 8;
											}
											case '4':
											{
												idx += 12;
												return X11_CADET_BLUE_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[11] | 0x20)
									{
										case '1':
										{
											idx += 12;
											return X11_CADET_BLUE_1 >>> 8;
										}
										case '2':
										{
											idx += 12;
											return X11_CADET_BLUE_2 >>> 8;
										}
										case '3':
										{
											idx += 12;
											return X11_CADET_BLUE_3 >>> 8;
										}
										case '4':
										{
											idx += 12;
											return X11_CADET_BLUE_4 >>> 8;
										}
									}
								}
							}
							idx += 10;
							return X11_CADET_BLUE >>> 8;
						}
						case 'b':
						{
							if (!str[6] || strcmp(str[6], !"LUE", true, 3))
							{
								return -1;
							}
							switch (str[9] | 0x20)
							{
								case '1':
								{
									idx += 10;
									return X11_CADETBLUE1 >>> 8;
								}
								case '2':
								{
									idx += 10;
									return X11_CADETBLUE2 >>> 8;
								}
								case '3':
								{
									idx += 10;
									return X11_CADETBLUE3 >>> 8;
								}
								case '4':
								{
									idx += 10;
									return X11_CADETBLUE4 >>> 8;
								}
							}
							idx += 9;
							return X11_CADETBLUE >>> 8;
						}
					}
				}
				case 'h':
				{
					switch (str[2] | 0x20)
					{
						case 'a':
						{
							if (!str[3] || strcmp(str[3], !"RTREUSE", true, 7))
							{
								return -1;
							}
							switch (str[10] | 0x20)
							{
								case ' ':
								{
									if (str[10])
									{
										switch (str[11] | 0x20)
										{
											case '1':
											{
												idx += 12;
												return X11_CHARTREUSE_1 >>> 8;
											}
											case '2':
											{
												idx += 12;
												return X11_CHARTREUSE_2 >>> 8;
											}
											case '3':
											{
												idx += 12;
												return X11_CHARTREUSE_3 >>> 8;
											}
											case '4':
											{
												idx += 12;
												return X11_CHARTREUSE_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[11] | 0x20)
									{
										case '1':
										{
											idx += 12;
											return X11_CHARTREUSE_1 >>> 8;
										}
										case '2':
										{
											idx += 12;
											return X11_CHARTREUSE_2 >>> 8;
										}
										case '3':
										{
											idx += 12;
											return X11_CHARTREUSE_3 >>> 8;
										}
										case '4':
										{
											idx += 12;
											return X11_CHARTREUSE_4 >>> 8;
										}
									}
								}
								case '1':
								{
									idx += 11;
									return X11_CHARTREUSE1 >>> 8;
								}
								case '2':
								{
									idx += 11;
									return X11_CHARTREUSE2 >>> 8;
								}
								case '3':
								{
									idx += 11;
									return X11_CHARTREUSE3 >>> 8;
								}
								case '4':
								{
									idx += 11;
									return X11_CHARTREUSE4 >>> 8;
								}
							}
							idx += 10;
							return X11_CHARTREUSE >>> 8;
						}
						case 'o':
						{
							if (!str[3] || strcmp(str[3], !"COLATE", true, 6))
							{
								return -1;
							}
							switch (str[9] | 0x20)
							{
								case ' ':
								{
									if (str[9])
									{
										switch (str[10] | 0x20)
										{
											case '1':
											{
												idx += 11;
												return X11_CHOCOLATE_1 >>> 8;
											}
											case '2':
											{
												idx += 11;
												return X11_CHOCOLATE_2 >>> 8;
											}
											case '3':
											{
												idx += 11;
												return X11_CHOCOLATE_3 >>> 8;
											}
											case '4':
											{
												idx += 11;
												return X11_CHOCOLATE_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[10] | 0x20)
									{
										case '1':
										{
											idx += 11;
											return X11_CHOCOLATE_1 >>> 8;
										}
										case '2':
										{
											idx += 11;
											return X11_CHOCOLATE_2 >>> 8;
										}
										case '3':
										{
											idx += 11;
											return X11_CHOCOLATE_3 >>> 8;
										}
										case '4':
										{
											idx += 11;
											return X11_CHOCOLATE_4 >>> 8;
										}
									}
								}
								case '1':
								{
									idx += 10;
									return X11_CHOCOLATE1 >>> 8;
								}
								case '2':
								{
									idx += 10;
									return X11_CHOCOLATE2 >>> 8;
								}
								case '3':
								{
									idx += 10;
									return X11_CHOCOLATE3 >>> 8;
								}
								case '4':
								{
									idx += 10;
									return X11_CHOCOLATE4 >>> 8;
								}
							}
							idx += 9;
							return X11_CHOCOLATE >>> 8;
						}
					}
				}
				case 'o':
				{
					if (str[2] != 'R')
					{
						return -1;
					}
					switch (str[3] | 0x20)
					{
						case 'a':
						{
							if (str[4] != 'L')
							{
								return -1;
							}
							switch (str[5] | 0x20)
							{
								case ' ':
								{
									if (str[5])
									{
										switch (str[6] | 0x20)
										{
											case '1':
											{
												idx += 7;
												return X11_CORAL_1 >>> 8;
											}
											case '2':
											{
												idx += 7;
												return X11_CORAL_2 >>> 8;
											}
											case '3':
											{
												idx += 7;
												return X11_CORAL_3 >>> 8;
											}
											case '4':
											{
												idx += 7;
												return X11_CORAL_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[6] | 0x20)
									{
										case '1':
										{
											idx += 7;
											return X11_CORAL_1 >>> 8;
										}
										case '2':
										{
											idx += 7;
											return X11_CORAL_2 >>> 8;
										}
										case '3':
										{
											idx += 7;
											return X11_CORAL_3 >>> 8;
										}
										case '4':
										{
											idx += 7;
											return X11_CORAL_4 >>> 8;
										}
									}
								}
								case '1':
								{
									idx += 6;
									return X11_CORAL1 >>> 8;
								}
								case '2':
								{
									idx += 6;
									return X11_CORAL2 >>> 8;
								}
								case '3':
								{
									idx += 6;
									return X11_CORAL3 >>> 8;
								}
								case '4':
								{
									idx += 6;
									return X11_CORAL4 >>> 8;
								}
							}
							idx += 5;
							return X11_CORAL >>> 8;
						}
						case 'n':
						{
							switch (str[4] | 0x20)
							{
								case 'f':
								{
									if (!str[5] || strcmp(str[5], !"LOWER", true, 5))
									{
										return -1;
									}
									switch (str[10] | 0x20)
									{
										case ' ':
										{
											if (str[10])
											{
												if (str[11] && !strcmp(str[11], !"BLUE", true, 4))
												{
													idx += 15;
													return X11_CORNFLOWER_BLUE >>> 8;
												}
											}
										}
										case '_' | 0x20:
										{
											if (str[11] && !strcmp(str[11], !"BLUE", true, 4))
											{
												idx += 15;
												return X11_CORNFLOWER_BLUE >>> 8;
											}
										}
										case 'b':
										{
											if (str[11] && !strcmp(str[11], !"LUE", true, 3))
											{
												idx += 14;
												return X11_CORNFLOWERBLUE >>> 8;
											}
										}
									}
								}
								case 's':
								{
									if (!str[5] || strcmp(str[5], !"ILK", true, 3))
									{
										return -1;
									}
									switch (str[8] | 0x20)
									{
										case ' ':
										{
											if (str[8])
											{
												switch (str[9] | 0x20)
												{
													case '1':
													{
														idx += 10;
														return X11_CORNSILK_1 >>> 8;
													}
													case '2':
													{
														idx += 10;
														return X11_CORNSILK_2 >>> 8;
													}
													case '3':
													{
														idx += 10;
														return X11_CORNSILK_3 >>> 8;
													}
													case '4':
													{
														idx += 10;
														return X11_CORNSILK_4 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[9] | 0x20)
											{
												case '1':
												{
													idx += 10;
													return X11_CORNSILK_1 >>> 8;
												}
												case '2':
												{
													idx += 10;
													return X11_CORNSILK_2 >>> 8;
												}
												case '3':
												{
													idx += 10;
													return X11_CORNSILK_3 >>> 8;
												}
												case '4':
												{
													idx += 10;
													return X11_CORNSILK_4 >>> 8;
												}
											}
										}
										case '1':
										{
											idx += 9;
											return X11_CORNSILK1 >>> 8;
										}
										case '2':
										{
											idx += 9;
											return X11_CORNSILK2 >>> 8;
										}
										case '3':
										{
											idx += 9;
											return X11_CORNSILK3 >>> 8;
										}
										case '4':
										{
											idx += 9;
											return X11_CORNSILK4 >>> 8;
										}
									}
									idx += 8;
									return X11_CORNSILK >>> 8;
								}
							}
						}
					}
				}
				case 'y':
				{
					if (!str[2] || strcmp(str[2], !"AN", true, 2))
					{
						return -1;
					}
					switch (str[4] | 0x20)
					{
						case ' ':
						{
							if (str[4])
							{
								switch (str[5] | 0x20)
								{
									case '1':
									{
										idx += 6;
										return X11_CYAN_1 >>> 8;
									}
									case '2':
									{
										idx += 6;
										return X11_CYAN_2 >>> 8;
									}
									case '3':
									{
										idx += 6;
										return X11_CYAN_3 >>> 8;
									}
									case '4':
									{
										idx += 6;
										return X11_CYAN_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[5] | 0x20)
							{
								case '1':
								{
									idx += 6;
									return X11_CYAN_1 >>> 8;
								}
								case '2':
								{
									idx += 6;
									return X11_CYAN_2 >>> 8;
								}
								case '3':
								{
									idx += 6;
									return X11_CYAN_3 >>> 8;
								}
								case '4':
								{
									idx += 6;
									return X11_CYAN_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 5;
							return X11_CYAN1 >>> 8;
						}
						case '2':
						{
							idx += 5;
							return X11_CYAN2 >>> 8;
						}
						case '3':
						{
							idx += 5;
							return X11_CYAN3 >>> 8;
						}
						case '4':
						{
							idx += 5;
							return X11_CYAN4 >>> 8;
						}
					}
					idx += 4;
					return X11_CYAN >>> 8;
				}
			}
		}
		case 'd':
		{
			switch (str[1] | 0x20)
			{
				case 'a':
				{
					if (!str[2] || strcmp(str[2], !"RK", true, 2))
					{
						return -1;
					}
					switch (str[4] | 0x20)
					{
						case ' ':
						{
							if (str[4])
							{
								switch (str[5] | 0x20)
								{
									case 'b':
									{
										if (str[6] && !strcmp(str[6], !"LUE", true, 3))
										{
											idx += 9;
											return X11_DARK_BLUE >>> 8;
										}
									}
									case 'c':
									{
										if (str[6] && !strcmp(str[6], !"YAN", true, 3))
										{
											idx += 9;
											return X11_DARK_CYAN >>> 8;
										}
									}
									case 'g':
									{
										switch (str[6] | 0x20)
										{
											case 'o':
											{
												if (!str[7] || strcmp(str[7], !"LDENROD", true, 7))
												{
													return -1;
												}
												switch (str[14] | 0x20)
												{
													case ' ':
													{
														if (str[14])
														{
															switch (str[15] | 0x20)
															{
																case '1':
																{
																	idx += 16;
																	return X11_DARK_GOLDENROD_1 >>> 8;
																}
																case '2':
																{
																	idx += 16;
																	return X11_DARK_GOLDENROD_2 >>> 8;
																}
																case '3':
																{
																	idx += 16;
																	return X11_DARK_GOLDENROD_3 >>> 8;
																}
																case '4':
																{
																	idx += 16;
																	return X11_DARK_GOLDENROD_4 >>> 8;
																}
															}
														}
													}
													case '_' | 0x20:
													{
														switch (str[15] | 0x20)
														{
															case '1':
															{
																idx += 16;
																return X11_DARK_GOLDENROD_1 >>> 8;
															}
															case '2':
															{
																idx += 16;
																return X11_DARK_GOLDENROD_2 >>> 8;
															}
															case '3':
															{
																idx += 16;
																return X11_DARK_GOLDENROD_3 >>> 8;
															}
															case '4':
															{
																idx += 16;
																return X11_DARK_GOLDENROD_4 >>> 8;
															}
														}
													}
												}
												idx += 14;
												return X11_DARK_GOLDENROD >>> 8;
											}
											case 'r':
											{
												switch (str[7] | 0x20)
												{
													case 'a':
													{
														if (str[8] == 'Y')
														{
															idx += 9;
															return X11_DARK_GRAY >>> 8;
														}
													}
													case 'e':
													{
														switch (str[8] | 0x20)
														{
															case 'e':
															{
																if (str[9] == 'N')
																{
																	idx += 10;
																	return X11_DARK_GREEN >>> 8;
																}
															}
															case 'y':
															{
																idx += 9;
																return X11_DARK_GREY >>> 8;
															}
														}
													}
												}
											}
										}
									}
									case 'k':
									{
										if (str[6] && !strcmp(str[6], !"HAKI", true, 4))
										{
											idx += 10;
											return X11_DARK_KHAKI >>> 8;
										}
									}
									case 'm':
									{
										if (str[6] && !strcmp(str[6], !"AGENTA", true, 6))
										{
											idx += 12;
											return X11_DARK_MAGENTA >>> 8;
										}
									}
									case 'o':
									{
										switch (str[6] | 0x20)
										{
											case 'l':
											{
												if (!str[7] || strcmp(str[7], !"IVE_GREEN", true, 9))
												{
													return -1;
												}
												switch (str[16] | 0x20)
												{
													case ' ':
													{
														if (str[16])
														{
															switch (str[17] | 0x20)
															{
																case '1':
																{
																	idx += 18;
																	return X11_DARK_OLIVE_GREEN_1 >>> 8;
																}
																case '2':
																{
																	idx += 18;
																	return X11_DARK_OLIVE_GREEN_2 >>> 8;
																}
																case '3':
																{
																	idx += 18;
																	return X11_DARK_OLIVE_GREEN_3 >>> 8;
																}
																case '4':
																{
																	idx += 18;
																	return X11_DARK_OLIVE_GREEN_4 >>> 8;
																}
															}
														}
													}
													case '_' | 0x20:
													{
														switch (str[17] | 0x20)
														{
															case '1':
															{
																idx += 18;
																return X11_DARK_OLIVE_GREEN_1 >>> 8;
															}
															case '2':
															{
																idx += 18;
																return X11_DARK_OLIVE_GREEN_2 >>> 8;
															}
															case '3':
															{
																idx += 18;
																return X11_DARK_OLIVE_GREEN_3 >>> 8;
															}
															case '4':
															{
																idx += 18;
																return X11_DARK_OLIVE_GREEN_4 >>> 8;
															}
														}
													}
												}
												idx += 16;
												return X11_DARK_OLIVE_GREEN >>> 8;
											}
											case 'r':
											{
												switch (str[7] | 0x20)
												{
													case 'a':
													{
														if (!str[8] || strcmp(str[8], !"NGE", true, 3))
														{
															return -1;
														}
														switch (str[11] | 0x20)
														{
															case ' ':
															{
																if (str[11])
																{
																	switch (str[12] | 0x20)
																	{
																		case '1':
																		{
																			idx += 13;
																			return X11_DARK_ORANGE_1 >>> 8;
																		}
																		case '2':
																		{
																			idx += 13;
																			return X11_DARK_ORANGE_2 >>> 8;
																		}
																		case '3':
																		{
																			idx += 13;
																			return X11_DARK_ORANGE_3 >>> 8;
																		}
																		case '4':
																		{
																			idx += 13;
																			return X11_DARK_ORANGE_4 >>> 8;
																		}
																	}
																}
															}
															case '_' | 0x20:
															{
																switch (str[12] | 0x20)
																{
																	case '1':
																	{
																		idx += 13;
																		return X11_DARK_ORANGE_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 13;
																		return X11_DARK_ORANGE_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 13;
																		return X11_DARK_ORANGE_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 13;
																		return X11_DARK_ORANGE_4 >>> 8;
																	}
																}
															}
														}
														idx += 11;
														return X11_DARK_ORANGE >>> 8;
													}
													case 'c':
													{
														if (!str[8] || strcmp(str[8], !"HID", true, 3))
														{
															return -1;
														}
														switch (str[11] | 0x20)
														{
															case ' ':
															{
																if (str[11])
																{
																	switch (str[12] | 0x20)
																	{
																		case '1':
																		{
																			idx += 13;
																			return X11_DARK_ORCHID_1 >>> 8;
																		}
																		case '2':
																		{
																			idx += 13;
																			return X11_DARK_ORCHID_2 >>> 8;
																		}
																		case '3':
																		{
																			idx += 13;
																			return X11_DARK_ORCHID_3 >>> 8;
																		}
																		case '4':
																		{
																			idx += 13;
																			return X11_DARK_ORCHID_4 >>> 8;
																		}
																	}
																}
															}
															case '_' | 0x20:
															{
																switch (str[12] | 0x20)
																{
																	case '1':
																	{
																		idx += 13;
																		return X11_DARK_ORCHID_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 13;
																		return X11_DARK_ORCHID_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 13;
																		return X11_DARK_ORCHID_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 13;
																		return X11_DARK_ORCHID_4 >>> 8;
																	}
																}
															}
														}
														idx += 11;
														return X11_DARK_ORCHID >>> 8;
													}
												}
											}
										}
									}
									case 'r':
									{
										if (str[6] && !strcmp(str[6], !"ED", true, 2))
										{
											idx += 8;
											return X11_DARK_RED >>> 8;
										}
									}
									case 's':
									{
										switch (str[6] | 0x20)
										{
											case 'a':
											{
												if (str[7] && !strcmp(str[7], !"LMON", true, 4))
												{
													idx += 11;
													return X11_DARK_SALMON >>> 8;
												}
											}
											case 'e':
											{
												if (!str[7] || strcmp(str[7], !"A_GREEN", true, 7))
												{
													return -1;
												}
												switch (str[14] | 0x20)
												{
													case ' ':
													{
														if (str[14])
														{
															switch (str[15] | 0x20)
															{
																case '1':
																{
																	idx += 16;
																	return X11_DARK_SEA_GREEN_1 >>> 8;
																}
																case '2':
																{
																	idx += 16;
																	return X11_DARK_SEA_GREEN_2 >>> 8;
																}
																case '3':
																{
																	idx += 16;
																	return X11_DARK_SEA_GREEN_3 >>> 8;
																}
																case '4':
																{
																	idx += 16;
																	return X11_DARK_SEA_GREEN_4 >>> 8;
																}
															}
														}
													}
													case '_' | 0x20:
													{
														switch (str[15] | 0x20)
														{
															case '1':
															{
																idx += 16;
																return X11_DARK_SEA_GREEN_1 >>> 8;
															}
															case '2':
															{
																idx += 16;
																return X11_DARK_SEA_GREEN_2 >>> 8;
															}
															case '3':
															{
																idx += 16;
																return X11_DARK_SEA_GREEN_3 >>> 8;
															}
															case '4':
															{
																idx += 16;
																return X11_DARK_SEA_GREEN_4 >>> 8;
															}
														}
													}
												}
												idx += 14;
												return X11_DARK_SEA_GREEN >>> 8;
											}
											case 'l':
											{
												if (!str[7] || strcmp(str[7], !"ATE_", true, 4))
												{
													return -1;
												}
												switch (str[11] | 0x20)
												{
													case 'b':
													{
														if (str[12] && !strcmp(str[12], !"LUE", true, 3))
														{
															idx += 15;
															return X11_DARK_SLATE_BLUE >>> 8;
														}
													}
													case 'g':
													{
														if (str[12] != 'R')
														{
															return -1;
														}
														switch (str[13] | 0x20)
														{
															case 'a':
															{
																if (str[14] != 'Y')
																{
																	return -1;
																}
																switch (str[15] | 0x20)
																{
																	case ' ':
																	{
																		if (str[15])
																		{
																			switch (str[16] | 0x20)
																			{
																				case '1':
																				{
																					idx += 17;
																					return X11_DARK_SLATE_GRAY_1 >>> 8;
																				}
																				case '2':
																				{
																					idx += 17;
																					return X11_DARK_SLATE_GRAY_2 >>> 8;
																				}
																				case '3':
																				{
																					idx += 17;
																					return X11_DARK_SLATE_GRAY_3 >>> 8;
																				}
																				case '4':
																				{
																					idx += 17;
																					return X11_DARK_SLATE_GRAY_4 >>> 8;
																				}
																			}
																		}
																	}
																	case '_' | 0x20:
																	{
																		switch (str[16] | 0x20)
																		{
																			case '1':
																			{
																				idx += 17;
																				return X11_DARK_SLATE_GRAY_1 >>> 8;
																			}
																			case '2':
																			{
																				idx += 17;
																				return X11_DARK_SLATE_GRAY_2 >>> 8;
																			}
																			case '3':
																			{
																				idx += 17;
																				return X11_DARK_SLATE_GRAY_3 >>> 8;
																			}
																			case '4':
																			{
																				idx += 17;
																				return X11_DARK_SLATE_GRAY_4 >>> 8;
																			}
																		}
																	}
																}
																idx += 15;
																return X11_DARK_SLATE_GRAY >>> 8;
															}
															case 'e':
															{
																if (str[14] == 'Y')
																{
																	idx += 15;
																	return X11_DARK_SLATE_GREY >>> 8;
																}
															}
														}
													}
												}
											}
										}
									}
									case 't':
									{
										if (str[6] && !strcmp(str[6], !"URQUOISE", true, 8))
										{
											idx += 14;
											return X11_DARK_TURQUOISE >>> 8;
										}
									}
									case 'v':
									{
										if (str[6] && !strcmp(str[6], !"IOLET", true, 5))
										{
											idx += 11;
											return X11_DARK_VIOLET >>> 8;
										}
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[5] | 0x20)
							{
								case 'b':
								{
									if (str[6] && !strcmp(str[6], !"LUE", true, 3))
									{
										idx += 9;
										return X11_DARK_BLUE >>> 8;
									}
								}
								case 'c':
								{
									if (str[6] && !strcmp(str[6], !"YAN", true, 3))
									{
										idx += 9;
										return X11_DARK_CYAN >>> 8;
									}
								}
								case 'g':
								{
									switch (str[6] | 0x20)
									{
										case 'o':
										{
											if (!str[7] || strcmp(str[7], !"LDENROD", true, 7))
											{
												return -1;
											}
											switch (str[14] | 0x20)
											{
												case ' ':
												{
													if (str[14])
													{
														switch (str[15] | 0x20)
														{
															case '1':
															{
																idx += 16;
																return X11_DARK_GOLDENROD_1 >>> 8;
															}
															case '2':
															{
																idx += 16;
																return X11_DARK_GOLDENROD_2 >>> 8;
															}
															case '3':
															{
																idx += 16;
																return X11_DARK_GOLDENROD_3 >>> 8;
															}
															case '4':
															{
																idx += 16;
																return X11_DARK_GOLDENROD_4 >>> 8;
															}
														}
													}
												}
												case '_' | 0x20:
												{
													switch (str[15] | 0x20)
													{
														case '1':
														{
															idx += 16;
															return X11_DARK_GOLDENROD_1 >>> 8;
														}
														case '2':
														{
															idx += 16;
															return X11_DARK_GOLDENROD_2 >>> 8;
														}
														case '3':
														{
															idx += 16;
															return X11_DARK_GOLDENROD_3 >>> 8;
														}
														case '4':
														{
															idx += 16;
															return X11_DARK_GOLDENROD_4 >>> 8;
														}
													}
												}
											}
											idx += 14;
											return X11_DARK_GOLDENROD >>> 8;
										}
										case 'r':
										{
											switch (str[7] | 0x20)
											{
												case 'a':
												{
													if (str[8] == 'Y')
													{
														idx += 9;
														return X11_DARK_GRAY >>> 8;
													}
												}
												case 'e':
												{
													switch (str[8] | 0x20)
													{
														case 'e':
														{
															if (str[9] == 'N')
															{
																idx += 10;
																return X11_DARK_GREEN >>> 8;
															}
														}
														case 'y':
														{
															idx += 9;
															return X11_DARK_GREY >>> 8;
														}
													}
												}
											}
										}
									}
								}
								case 'k':
								{
									if (str[6] && !strcmp(str[6], !"HAKI", true, 4))
									{
										idx += 10;
										return X11_DARK_KHAKI >>> 8;
									}
								}
								case 'm':
								{
									if (str[6] && !strcmp(str[6], !"AGENTA", true, 6))
									{
										idx += 12;
										return X11_DARK_MAGENTA >>> 8;
									}
								}
								case 'o':
								{
									switch (str[6] | 0x20)
									{
										case 'l':
										{
											if (!str[7] || strcmp(str[7], !"IVE_GREEN", true, 9))
											{
												return -1;
											}
											switch (str[16] | 0x20)
											{
												case ' ':
												{
													if (str[16])
													{
														switch (str[17] | 0x20)
														{
															case '1':
															{
																idx += 18;
																return X11_DARK_OLIVE_GREEN_1 >>> 8;
															}
															case '2':
															{
																idx += 18;
																return X11_DARK_OLIVE_GREEN_2 >>> 8;
															}
															case '3':
															{
																idx += 18;
																return X11_DARK_OLIVE_GREEN_3 >>> 8;
															}
															case '4':
															{
																idx += 18;
																return X11_DARK_OLIVE_GREEN_4 >>> 8;
															}
														}
													}
												}
												case '_' | 0x20:
												{
													switch (str[17] | 0x20)
													{
														case '1':
														{
															idx += 18;
															return X11_DARK_OLIVE_GREEN_1 >>> 8;
														}
														case '2':
														{
															idx += 18;
															return X11_DARK_OLIVE_GREEN_2 >>> 8;
														}
														case '3':
														{
															idx += 18;
															return X11_DARK_OLIVE_GREEN_3 >>> 8;
														}
														case '4':
														{
															idx += 18;
															return X11_DARK_OLIVE_GREEN_4 >>> 8;
														}
													}
												}
											}
											idx += 16;
											return X11_DARK_OLIVE_GREEN >>> 8;
										}
										case 'r':
										{
											switch (str[7] | 0x20)
											{
												case 'a':
												{
													if (!str[8] || strcmp(str[8], !"NGE", true, 3))
													{
														return -1;
													}
													switch (str[11] | 0x20)
													{
														case ' ':
														{
															if (str[11])
															{
																switch (str[12] | 0x20)
																{
																	case '1':
																	{
																		idx += 13;
																		return X11_DARK_ORANGE_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 13;
																		return X11_DARK_ORANGE_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 13;
																		return X11_DARK_ORANGE_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 13;
																		return X11_DARK_ORANGE_4 >>> 8;
																	}
																}
															}
														}
														case '_' | 0x20:
														{
															switch (str[12] | 0x20)
															{
																case '1':
																{
																	idx += 13;
																	return X11_DARK_ORANGE_1 >>> 8;
																}
																case '2':
																{
																	idx += 13;
																	return X11_DARK_ORANGE_2 >>> 8;
																}
																case '3':
																{
																	idx += 13;
																	return X11_DARK_ORANGE_3 >>> 8;
																}
																case '4':
																{
																	idx += 13;
																	return X11_DARK_ORANGE_4 >>> 8;
																}
															}
														}
													}
													idx += 11;
													return X11_DARK_ORANGE >>> 8;
												}
												case 'c':
												{
													if (!str[8] || strcmp(str[8], !"HID", true, 3))
													{
														return -1;
													}
													switch (str[11] | 0x20)
													{
														case ' ':
														{
															if (str[11])
															{
																switch (str[12] | 0x20)
																{
																	case '1':
																	{
																		idx += 13;
																		return X11_DARK_ORCHID_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 13;
																		return X11_DARK_ORCHID_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 13;
																		return X11_DARK_ORCHID_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 13;
																		return X11_DARK_ORCHID_4 >>> 8;
																	}
																}
															}
														}
														case '_' | 0x20:
														{
															switch (str[12] | 0x20)
															{
																case '1':
																{
																	idx += 13;
																	return X11_DARK_ORCHID_1 >>> 8;
																}
																case '2':
																{
																	idx += 13;
																	return X11_DARK_ORCHID_2 >>> 8;
																}
																case '3':
																{
																	idx += 13;
																	return X11_DARK_ORCHID_3 >>> 8;
																}
																case '4':
																{
																	idx += 13;
																	return X11_DARK_ORCHID_4 >>> 8;
																}
															}
														}
													}
													idx += 11;
													return X11_DARK_ORCHID >>> 8;
												}
											}
										}
									}
								}
								case 'r':
								{
									if (str[6] && !strcmp(str[6], !"ED", true, 2))
									{
										idx += 8;
										return X11_DARK_RED >>> 8;
									}
								}
								case 's':
								{
									switch (str[6] | 0x20)
									{
										case 'a':
										{
											if (str[7] && !strcmp(str[7], !"LMON", true, 4))
											{
												idx += 11;
												return X11_DARK_SALMON >>> 8;
											}
										}
										case 'e':
										{
											if (!str[7] || strcmp(str[7], !"A_GREEN", true, 7))
											{
												return -1;
											}
											switch (str[14] | 0x20)
											{
												case ' ':
												{
													if (str[14])
													{
														switch (str[15] | 0x20)
														{
															case '1':
															{
																idx += 16;
																return X11_DARK_SEA_GREEN_1 >>> 8;
															}
															case '2':
															{
																idx += 16;
																return X11_DARK_SEA_GREEN_2 >>> 8;
															}
															case '3':
															{
																idx += 16;
																return X11_DARK_SEA_GREEN_3 >>> 8;
															}
															case '4':
															{
																idx += 16;
																return X11_DARK_SEA_GREEN_4 >>> 8;
															}
														}
													}
												}
												case '_' | 0x20:
												{
													switch (str[15] | 0x20)
													{
														case '1':
														{
															idx += 16;
															return X11_DARK_SEA_GREEN_1 >>> 8;
														}
														case '2':
														{
															idx += 16;
															return X11_DARK_SEA_GREEN_2 >>> 8;
														}
														case '3':
														{
															idx += 16;
															return X11_DARK_SEA_GREEN_3 >>> 8;
														}
														case '4':
														{
															idx += 16;
															return X11_DARK_SEA_GREEN_4 >>> 8;
														}
													}
												}
											}
											idx += 14;
											return X11_DARK_SEA_GREEN >>> 8;
										}
										case 'l':
										{
											if (!str[7] || strcmp(str[7], !"ATE_", true, 4))
											{
												return -1;
											}
											switch (str[11] | 0x20)
											{
												case 'b':
												{
													if (str[12] && !strcmp(str[12], !"LUE", true, 3))
													{
														idx += 15;
														return X11_DARK_SLATE_BLUE >>> 8;
													}
												}
												case 'g':
												{
													if (str[12] != 'R')
													{
														return -1;
													}
													switch (str[13] | 0x20)
													{
														case 'a':
														{
															if (str[14] != 'Y')
															{
																return -1;
															}
															switch (str[15] | 0x20)
															{
																case ' ':
																{
																	if (str[15])
																	{
																		switch (str[16] | 0x20)
																		{
																			case '1':
																			{
																				idx += 17;
																				return X11_DARK_SLATE_GRAY_1 >>> 8;
																			}
																			case '2':
																			{
																				idx += 17;
																				return X11_DARK_SLATE_GRAY_2 >>> 8;
																			}
																			case '3':
																			{
																				idx += 17;
																				return X11_DARK_SLATE_GRAY_3 >>> 8;
																			}
																			case '4':
																			{
																				idx += 17;
																				return X11_DARK_SLATE_GRAY_4 >>> 8;
																			}
																		}
																	}
																}
																case '_' | 0x20:
																{
																	switch (str[16] | 0x20)
																	{
																		case '1':
																		{
																			idx += 17;
																			return X11_DARK_SLATE_GRAY_1 >>> 8;
																		}
																		case '2':
																		{
																			idx += 17;
																			return X11_DARK_SLATE_GRAY_2 >>> 8;
																		}
																		case '3':
																		{
																			idx += 17;
																			return X11_DARK_SLATE_GRAY_3 >>> 8;
																		}
																		case '4':
																		{
																			idx += 17;
																			return X11_DARK_SLATE_GRAY_4 >>> 8;
																		}
																	}
																}
															}
															idx += 15;
															return X11_DARK_SLATE_GRAY >>> 8;
														}
														case 'e':
														{
															if (str[14] == 'Y')
															{
																idx += 15;
																return X11_DARK_SLATE_GREY >>> 8;
															}
														}
													}
												}
											}
										}
									}
								}
								case 't':
								{
									if (str[6] && !strcmp(str[6], !"URQUOISE", true, 8))
									{
										idx += 14;
										return X11_DARK_TURQUOISE >>> 8;
									}
								}
								case 'v':
								{
									if (str[6] && !strcmp(str[6], !"IOLET", true, 5))
									{
										idx += 11;
										return X11_DARK_VIOLET >>> 8;
									}
								}
							}
						}
						case 'b':
						{
							if (str[5] && !strcmp(str[5], !"LUE", true, 3))
							{
								idx += 8;
								return X11_DARKBLUE >>> 8;
							}
						}
						case 'c':
						{
							if (str[5] && !strcmp(str[5], !"YAN", true, 3))
							{
								idx += 8;
								return X11_DARKCYAN >>> 8;
							}
						}
						case 'g':
						{
							switch (str[5] | 0x20)
							{
								case 'o':
								{
									if (!str[6] || strcmp(str[6], !"LDENROD", true, 7))
									{
										return -1;
									}
									switch (str[13] | 0x20)
									{
										case '1':
										{
											idx += 14;
											return X11_DARKGOLDENROD1 >>> 8;
										}
										case '2':
										{
											idx += 14;
											return X11_DARKGOLDENROD2 >>> 8;
										}
										case '3':
										{
											idx += 14;
											return X11_DARKGOLDENROD3 >>> 8;
										}
										case '4':
										{
											idx += 14;
											return X11_DARKGOLDENROD4 >>> 8;
										}
									}
									idx += 13;
									return X11_DARKGOLDENROD >>> 8;
								}
								case 'r':
								{
									switch (str[6] | 0x20)
									{
										case 'a':
										{
											if (str[7] == 'Y')
											{
												idx += 8;
												return X11_DARKGRAY >>> 8;
											}
										}
										case 'e':
										{
											switch (str[7] | 0x20)
											{
												case 'e':
												{
													if (str[8] == 'N')
													{
														idx += 9;
														return X11_DARKGREEN >>> 8;
													}
												}
												case 'y':
												{
													idx += 8;
													return X11_DARKGREY >>> 8;
												}
											}
										}
									}
								}
							}
						}
						case 'k':
						{
							if (str[5] && !strcmp(str[5], !"HAKI", true, 4))
							{
								idx += 9;
								return X11_DARKKHAKI >>> 8;
							}
						}
						case 'm':
						{
							if (str[5] && !strcmp(str[5], !"AGENTA", true, 6))
							{
								idx += 11;
								return X11_DARKMAGENTA >>> 8;
							}
						}
						case 'o':
						{
							switch (str[5] | 0x20)
							{
								case 'l':
								{
									if (!str[6] || strcmp(str[6], !"IVEGREEN", true, 8))
									{
										return -1;
									}
									switch (str[14] | 0x20)
									{
										case '1':
										{
											idx += 15;
											return X11_DARKOLIVEGREEN1 >>> 8;
										}
										case '2':
										{
											idx += 15;
											return X11_DARKOLIVEGREEN2 >>> 8;
										}
										case '3':
										{
											idx += 15;
											return X11_DARKOLIVEGREEN3 >>> 8;
										}
										case '4':
										{
											idx += 15;
											return X11_DARKOLIVEGREEN4 >>> 8;
										}
									}
									idx += 14;
									return X11_DARKOLIVEGREEN >>> 8;
								}
								case 'r':
								{
									switch (str[6] | 0x20)
									{
										case 'a':
										{
											if (!str[7] || strcmp(str[7], !"NGE", true, 3))
											{
												return -1;
											}
											switch (str[10] | 0x20)
											{
												case '1':
												{
													idx += 11;
													return X11_DARKORANGE1 >>> 8;
												}
												case '2':
												{
													idx += 11;
													return X11_DARKORANGE2 >>> 8;
												}
												case '3':
												{
													idx += 11;
													return X11_DARKORANGE3 >>> 8;
												}
												case '4':
												{
													idx += 11;
													return X11_DARKORANGE4 >>> 8;
												}
											}
											idx += 10;
											return X11_DARKORANGE >>> 8;
										}
										case 'c':
										{
											if (!str[7] || strcmp(str[7], !"HID", true, 3))
											{
												return -1;
											}
											switch (str[10] | 0x20)
											{
												case '1':
												{
													idx += 11;
													return X11_DARKORCHID1 >>> 8;
												}
												case '2':
												{
													idx += 11;
													return X11_DARKORCHID2 >>> 8;
												}
												case '3':
												{
													idx += 11;
													return X11_DARKORCHID3 >>> 8;
												}
												case '4':
												{
													idx += 11;
													return X11_DARKORCHID4 >>> 8;
												}
											}
											idx += 10;
											return X11_DARKORCHID >>> 8;
										}
									}
								}
							}
						}
						case 'r':
						{
							if (str[5] && !strcmp(str[5], !"ED", true, 2))
							{
								idx += 7;
								return X11_DARKRED >>> 8;
							}
						}
						case 's':
						{
							switch (str[5] | 0x20)
							{
								case 'a':
								{
									if (str[6] && !strcmp(str[6], !"LMON", true, 4))
									{
										idx += 10;
										return X11_DARKSALMON >>> 8;
									}
								}
								case 'e':
								{
									if (!str[6] || strcmp(str[6], !"AGREEN", true, 6))
									{
										return -1;
									}
									switch (str[12] | 0x20)
									{
										case '1':
										{
											idx += 13;
											return X11_DARKSEAGREEN1 >>> 8;
										}
										case '2':
										{
											idx += 13;
											return X11_DARKSEAGREEN2 >>> 8;
										}
										case '3':
										{
											idx += 13;
											return X11_DARKSEAGREEN3 >>> 8;
										}
										case '4':
										{
											idx += 13;
											return X11_DARKSEAGREEN4 >>> 8;
										}
									}
									idx += 12;
									return X11_DARKSEAGREEN >>> 8;
								}
								case 'l':
								{
									if (!str[6] || strcmp(str[6], !"ATE", true, 3))
									{
										return -1;
									}
									switch (str[9] | 0x20)
									{
										case 'b':
										{
											if (str[10] && !strcmp(str[10], !"LUE", true, 3))
											{
												idx += 13;
												return X11_DARKSLATEBLUE >>> 8;
											}
										}
										case 'g':
										{
											if (str[10] != 'R')
											{
												return -1;
											}
											switch (str[11] | 0x20)
											{
												case 'a':
												{
													if (str[12] != 'Y')
													{
														return -1;
													}
													switch (str[13] | 0x20)
													{
														case '1':
														{
															idx += 14;
															return X11_DARKSLATEGRAY1 >>> 8;
														}
														case '2':
														{
															idx += 14;
															return X11_DARKSLATEGRAY2 >>> 8;
														}
														case '3':
														{
															idx += 14;
															return X11_DARKSLATEGRAY3 >>> 8;
														}
														case '4':
														{
															idx += 14;
															return X11_DARKSLATEGRAY4 >>> 8;
														}
													}
													idx += 13;
													return X11_DARKSLATEGRAY >>> 8;
												}
												case 'e':
												{
													if (str[12] == 'Y')
													{
														idx += 13;
														return X11_DARKSLATEGREY >>> 8;
													}
												}
											}
										}
									}
								}
							}
						}
						case 't':
						{
							if (str[5] && !strcmp(str[5], !"URQUOISE", true, 8))
							{
								idx += 13;
								return X11_DARKTURQUOISE >>> 8;
							}
						}
						case 'v':
						{
							if (str[5] && !strcmp(str[5], !"IOLET", true, 5))
							{
								idx += 10;
								return X11_DARKVIOLET >>> 8;
							}
						}
					}
				}
				case 'e':
				{
					if (!str[2] || strcmp(str[2], !"EP", true, 2))
					{
						return -1;
					}
					switch (str[4] | 0x20)
					{
						case ' ':
						{
							if (str[4])
							{
								switch (str[5] | 0x20)
								{
									case 'p':
									{
										if (!str[6] || strcmp(str[6], !"INK", true, 3))
										{
											return -1;
										}
										switch (str[9] | 0x20)
										{
											case ' ':
											{
												if (str[9])
												{
													switch (str[10] | 0x20)
													{
														case '1':
														{
															idx += 11;
															return X11_DEEP_PINK_1 >>> 8;
														}
														case '2':
														{
															idx += 11;
															return X11_DEEP_PINK_2 >>> 8;
														}
														case '3':
														{
															idx += 11;
															return X11_DEEP_PINK_3 >>> 8;
														}
														case '4':
														{
															idx += 11;
															return X11_DEEP_PINK_4 >>> 8;
														}
													}
												}
											}
											case '_' | 0x20:
											{
												switch (str[10] | 0x20)
												{
													case '1':
													{
														idx += 11;
														return X11_DEEP_PINK_1 >>> 8;
													}
													case '2':
													{
														idx += 11;
														return X11_DEEP_PINK_2 >>> 8;
													}
													case '3':
													{
														idx += 11;
														return X11_DEEP_PINK_3 >>> 8;
													}
													case '4':
													{
														idx += 11;
														return X11_DEEP_PINK_4 >>> 8;
													}
												}
											}
										}
										idx += 9;
										return X11_DEEP_PINK >>> 8;
									}
									case 's':
									{
										if (!str[6] || strcmp(str[6], !"KY_BLUE", true, 7))
										{
											return -1;
										}
										switch (str[13] | 0x20)
										{
											case ' ':
											{
												if (str[13])
												{
													switch (str[14] | 0x20)
													{
														case '1':
														{
															idx += 15;
															return X11_DEEP_SKY_BLUE_1 >>> 8;
														}
														case '2':
														{
															idx += 15;
															return X11_DEEP_SKY_BLUE_2 >>> 8;
														}
														case '3':
														{
															idx += 15;
															return X11_DEEP_SKY_BLUE_3 >>> 8;
														}
														case '4':
														{
															idx += 15;
															return X11_DEEP_SKY_BLUE_4 >>> 8;
														}
													}
												}
											}
											case '_' | 0x20:
											{
												switch (str[14] | 0x20)
												{
													case '1':
													{
														idx += 15;
														return X11_DEEP_SKY_BLUE_1 >>> 8;
													}
													case '2':
													{
														idx += 15;
														return X11_DEEP_SKY_BLUE_2 >>> 8;
													}
													case '3':
													{
														idx += 15;
														return X11_DEEP_SKY_BLUE_3 >>> 8;
													}
													case '4':
													{
														idx += 15;
														return X11_DEEP_SKY_BLUE_4 >>> 8;
													}
												}
											}
										}
										idx += 13;
										return X11_DEEP_SKY_BLUE >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[5] | 0x20)
							{
								case 'p':
								{
									if (!str[6] || strcmp(str[6], !"INK", true, 3))
									{
										return -1;
									}
									switch (str[9] | 0x20)
									{
										case ' ':
										{
											if (str[9])
											{
												switch (str[10] | 0x20)
												{
													case '1':
													{
														idx += 11;
														return X11_DEEP_PINK_1 >>> 8;
													}
													case '2':
													{
														idx += 11;
														return X11_DEEP_PINK_2 >>> 8;
													}
													case '3':
													{
														idx += 11;
														return X11_DEEP_PINK_3 >>> 8;
													}
													case '4':
													{
														idx += 11;
														return X11_DEEP_PINK_4 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[10] | 0x20)
											{
												case '1':
												{
													idx += 11;
													return X11_DEEP_PINK_1 >>> 8;
												}
												case '2':
												{
													idx += 11;
													return X11_DEEP_PINK_2 >>> 8;
												}
												case '3':
												{
													idx += 11;
													return X11_DEEP_PINK_3 >>> 8;
												}
												case '4':
												{
													idx += 11;
													return X11_DEEP_PINK_4 >>> 8;
												}
											}
										}
									}
									idx += 9;
									return X11_DEEP_PINK >>> 8;
								}
								case 's':
								{
									if (!str[6] || strcmp(str[6], !"KY_BLUE", true, 7))
									{
										return -1;
									}
									switch (str[13] | 0x20)
									{
										case ' ':
										{
											if (str[13])
											{
												switch (str[14] | 0x20)
												{
													case '1':
													{
														idx += 15;
														return X11_DEEP_SKY_BLUE_1 >>> 8;
													}
													case '2':
													{
														idx += 15;
														return X11_DEEP_SKY_BLUE_2 >>> 8;
													}
													case '3':
													{
														idx += 15;
														return X11_DEEP_SKY_BLUE_3 >>> 8;
													}
													case '4':
													{
														idx += 15;
														return X11_DEEP_SKY_BLUE_4 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[14] | 0x20)
											{
												case '1':
												{
													idx += 15;
													return X11_DEEP_SKY_BLUE_1 >>> 8;
												}
												case '2':
												{
													idx += 15;
													return X11_DEEP_SKY_BLUE_2 >>> 8;
												}
												case '3':
												{
													idx += 15;
													return X11_DEEP_SKY_BLUE_3 >>> 8;
												}
												case '4':
												{
													idx += 15;
													return X11_DEEP_SKY_BLUE_4 >>> 8;
												}
											}
										}
									}
									idx += 13;
									return X11_DEEP_SKY_BLUE >>> 8;
								}
							}
						}
						case 'p':
						{
							if (!str[5] || strcmp(str[5], !"INK", true, 3))
							{
								return -1;
							}
							switch (str[8] | 0x20)
							{
								case '1':
								{
									idx += 9;
									return X11_DEEPPINK1 >>> 8;
								}
								case '2':
								{
									idx += 9;
									return X11_DEEPPINK2 >>> 8;
								}
								case '3':
								{
									idx += 9;
									return X11_DEEPPINK3 >>> 8;
								}
								case '4':
								{
									idx += 9;
									return X11_DEEPPINK4 >>> 8;
								}
							}
							idx += 8;
							return X11_DEEPPINK >>> 8;
						}
						case 's':
						{
							if (!str[5] || strcmp(str[5], !"KYBLUE", true, 6))
							{
								return -1;
							}
							switch (str[11] | 0x20)
							{
								case '1':
								{
									idx += 12;
									return X11_DEEPSKYBLUE1 >>> 8;
								}
								case '2':
								{
									idx += 12;
									return X11_DEEPSKYBLUE2 >>> 8;
								}
								case '3':
								{
									idx += 12;
									return X11_DEEPSKYBLUE3 >>> 8;
								}
								case '4':
								{
									idx += 12;
									return X11_DEEPSKYBLUE4 >>> 8;
								}
							}
							idx += 11;
							return X11_DEEPSKYBLUE >>> 8;
						}
					}
				}
				case 'i':
				{
					if (str[2] != 'M')
					{
						return -1;
					}
					switch (str[3] | 0x20)
					{
						case ' ':
						{
							if (str[3])
							{
								if (!str[4] || strcmp(str[4], !"GR", true, 2))
								{
									return -1;
								}
								switch (str[6] | 0x20)
								{
									case 'a':
									{
										if (str[7] == 'Y')
										{
											idx += 8;
											return X11_DIM_GRAY >>> 8;
										}
									}
									case 'e':
									{
										if (str[7] == 'Y')
										{
											idx += 8;
											return X11_DIM_GREY >>> 8;
										}
									}
								}
							}
						}
						case '_' | 0x20:
						{
							if (!str[4] || strcmp(str[4], !"GR", true, 2))
							{
								return -1;
							}
							switch (str[6] | 0x20)
							{
								case 'a':
								{
									if (str[7] == 'Y')
									{
										idx += 8;
										return X11_DIM_GRAY >>> 8;
									}
								}
								case 'e':
								{
									if (str[7] == 'Y')
									{
										idx += 8;
										return X11_DIM_GREY >>> 8;
									}
								}
							}
						}
						case 'g':
						{
							if (str[4] != 'R')
							{
								return -1;
							}
							switch (str[5] | 0x20)
							{
								case 'a':
								{
									if (str[6] == 'Y')
									{
										idx += 7;
										return X11_DIMGRAY >>> 8;
									}
								}
								case 'e':
								{
									if (str[6] == 'Y')
									{
										idx += 7;
										return X11_DIMGREY >>> 8;
									}
								}
							}
						}
					}
				}
				case 'o':
				{
					if (!str[2] || strcmp(str[2], !"DGER", true, 4))
					{
						return -1;
					}
					switch (str[6] | 0x20)
					{
						case ' ':
						{
							if (str[6])
							{
								if (!str[7] || strcmp(str[7], !"BLUE", true, 4))
								{
									return -1;
								}
								switch (str[11] | 0x20)
								{
									case ' ':
									{
										if (str[11])
										{
											switch (str[12] | 0x20)
											{
												case '1':
												{
													idx += 13;
													return X11_DODGER_BLUE_1 >>> 8;
												}
												case '2':
												{
													idx += 13;
													return X11_DODGER_BLUE_2 >>> 8;
												}
												case '3':
												{
													idx += 13;
													return X11_DODGER_BLUE_3 >>> 8;
												}
												case '4':
												{
													idx += 13;
													return X11_DODGER_BLUE_4 >>> 8;
												}
											}
										}
									}
									case '_' | 0x20:
									{
										switch (str[12] | 0x20)
										{
											case '1':
											{
												idx += 13;
												return X11_DODGER_BLUE_1 >>> 8;
											}
											case '2':
											{
												idx += 13;
												return X11_DODGER_BLUE_2 >>> 8;
											}
											case '3':
											{
												idx += 13;
												return X11_DODGER_BLUE_3 >>> 8;
											}
											case '4':
											{
												idx += 13;
												return X11_DODGER_BLUE_4 >>> 8;
											}
										}
									}
								}
								idx += 11;
								return X11_DODGER_BLUE >>> 8;
							}
						}
						case '_' | 0x20:
						{
							if (!str[7] || strcmp(str[7], !"BLUE", true, 4))
							{
								return -1;
							}
							switch (str[11] | 0x20)
							{
								case ' ':
								{
									if (str[11])
									{
										switch (str[12] | 0x20)
										{
											case '1':
											{
												idx += 13;
												return X11_DODGER_BLUE_1 >>> 8;
											}
											case '2':
											{
												idx += 13;
												return X11_DODGER_BLUE_2 >>> 8;
											}
											case '3':
											{
												idx += 13;
												return X11_DODGER_BLUE_3 >>> 8;
											}
											case '4':
											{
												idx += 13;
												return X11_DODGER_BLUE_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[12] | 0x20)
									{
										case '1':
										{
											idx += 13;
											return X11_DODGER_BLUE_1 >>> 8;
										}
										case '2':
										{
											idx += 13;
											return X11_DODGER_BLUE_2 >>> 8;
										}
										case '3':
										{
											idx += 13;
											return X11_DODGER_BLUE_3 >>> 8;
										}
										case '4':
										{
											idx += 13;
											return X11_DODGER_BLUE_4 >>> 8;
										}
									}
								}
							}
							idx += 11;
							return X11_DODGER_BLUE >>> 8;
						}
						case 'b':
						{
							if (!str[7] || strcmp(str[7], !"LUE", true, 3))
							{
								return -1;
							}
							switch (str[10] | 0x20)
							{
								case '1':
								{
									idx += 11;
									return X11_DODGERBLUE1 >>> 8;
								}
								case '2':
								{
									idx += 11;
									return X11_DODGERBLUE2 >>> 8;
								}
								case '3':
								{
									idx += 11;
									return X11_DODGERBLUE3 >>> 8;
								}
								case '4':
								{
									idx += 11;
									return X11_DODGERBLUE4 >>> 8;
								}
							}
							idx += 10;
							return X11_DODGERBLUE >>> 8;
						}
					}
				}
			}
		}
		case 'f':
		{
			switch (str[1] | 0x20)
			{
				case 'i':
				{
					if (!str[2] || strcmp(str[2], !"REBRICK", true, 7))
					{
						return -1;
					}
					switch (str[9] | 0x20)
					{
						case ' ':
						{
							if (str[9])
							{
								switch (str[10] | 0x20)
								{
									case '1':
									{
										idx += 11;
										return X11_FIREBRICK_1 >>> 8;
									}
									case '2':
									{
										idx += 11;
										return X11_FIREBRICK_2 >>> 8;
									}
									case '3':
									{
										idx += 11;
										return X11_FIREBRICK_3 >>> 8;
									}
									case '4':
									{
										idx += 11;
										return X11_FIREBRICK_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[10] | 0x20)
							{
								case '1':
								{
									idx += 11;
									return X11_FIREBRICK_1 >>> 8;
								}
								case '2':
								{
									idx += 11;
									return X11_FIREBRICK_2 >>> 8;
								}
								case '3':
								{
									idx += 11;
									return X11_FIREBRICK_3 >>> 8;
								}
								case '4':
								{
									idx += 11;
									return X11_FIREBRICK_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 10;
							return X11_FIREBRICK1 >>> 8;
						}
						case '2':
						{
							idx += 10;
							return X11_FIREBRICK2 >>> 8;
						}
						case '3':
						{
							idx += 10;
							return X11_FIREBRICK3 >>> 8;
						}
						case '4':
						{
							idx += 10;
							return X11_FIREBRICK4 >>> 8;
						}
					}
					idx += 9;
					return X11_FIREBRICK >>> 8;
				}
				case 'l':
				{
					if (!str[2] || strcmp(str[2], !"ORAL", true, 4))
					{
						return -1;
					}
					switch (str[6] | 0x20)
					{
						case ' ':
						{
							if (str[6])
							{
								if (str[7] && !strcmp(str[7], !"WHITE", true, 5))
								{
									idx += 12;
									return X11_FLORAL_WHITE >>> 8;
								}
							}
						}
						case '_' | 0x20:
						{
							if (str[7] && !strcmp(str[7], !"WHITE", true, 5))
							{
								idx += 12;
								return X11_FLORAL_WHITE >>> 8;
							}
						}
						case 'w':
						{
							if (str[7] && !strcmp(str[7], !"HITE", true, 4))
							{
								idx += 11;
								return X11_FLORALWHITE >>> 8;
							}
						}
					}
				}
				case 'o':
				{
					if (!str[2] || strcmp(str[2], !"REST", true, 4))
					{
						return -1;
					}
					switch (str[6] | 0x20)
					{
						case ' ':
						{
							if (str[6])
							{
								if (str[7] && !strcmp(str[7], !"GREEN", true, 5))
								{
									idx += 12;
									return X11_FOREST_GREEN >>> 8;
								}
							}
						}
						case '_' | 0x20:
						{
							if (str[7] && !strcmp(str[7], !"GREEN", true, 5))
							{
								idx += 12;
								return X11_FOREST_GREEN >>> 8;
							}
						}
						case 'g':
						{
							if (str[7] && !strcmp(str[7], !"REEN", true, 4))
							{
								idx += 11;
								return X11_FORESTGREEN >>> 8;
							}
						}
					}
				}
			}
		}
		case 'g':
		{
			switch (str[1] | 0x20)
			{
				case 'a':
				{
					if (str[2] && !strcmp(str[2], !"INSBORO", true, 7))
					{
						idx += 9;
						return X11_GAINSBORO >>> 8;
					}
				}
				case 'h':
				{
					if (!str[2] || strcmp(str[2], !"OST", true, 3))
					{
						return -1;
					}
					switch (str[5] | 0x20)
					{
						case ' ':
						{
							if (str[5])
							{
								if (str[6] && !strcmp(str[6], !"WHITE", true, 5))
								{
									idx += 11;
									return X11_GHOST_WHITE >>> 8;
								}
							}
						}
						case '_' | 0x20:
						{
							if (str[6] && !strcmp(str[6], !"WHITE", true, 5))
							{
								idx += 11;
								return X11_GHOST_WHITE >>> 8;
							}
						}
						case 'w':
						{
							if (str[6] && !strcmp(str[6], !"HITE", true, 4))
							{
								idx += 10;
								return X11_GHOSTWHITE >>> 8;
							}
						}
					}
				}
				case 'o':
				{
					if (!str[2] || strcmp(str[2], !"LD", true, 2))
					{
						return -1;
					}
					switch (str[4] | 0x20)
					{
						case ' ':
						{
							if (str[4])
							{
								switch (str[5] | 0x20)
								{
									case '1':
									{
										idx += 6;
										return X11_GOLD_1 >>> 8;
									}
									case '2':
									{
										idx += 6;
										return X11_GOLD_2 >>> 8;
									}
									case '3':
									{
										idx += 6;
										return X11_GOLD_3 >>> 8;
									}
									case '4':
									{
										idx += 6;
										return X11_GOLD_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[5] | 0x20)
							{
								case '1':
								{
									idx += 6;
									return X11_GOLD_1 >>> 8;
								}
								case '2':
								{
									idx += 6;
									return X11_GOLD_2 >>> 8;
								}
								case '3':
								{
									idx += 6;
									return X11_GOLD_3 >>> 8;
								}
								case '4':
								{
									idx += 6;
									return X11_GOLD_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 5;
							return X11_GOLD1 >>> 8;
						}
						case '2':
						{
							idx += 5;
							return X11_GOLD2 >>> 8;
						}
						case '3':
						{
							idx += 5;
							return X11_GOLD3 >>> 8;
						}
						case '4':
						{
							idx += 5;
							return X11_GOLD4 >>> 8;
						}
						case 'e':
						{
							if (!str[5] || strcmp(str[5], !"NROD", true, 4))
							{
								return -1;
							}
							switch (str[9] | 0x20)
							{
								case ' ':
								{
									if (str[9])
									{
										switch (str[10] | 0x20)
										{
											case '1':
											{
												idx += 11;
												return X11_GOLDENROD_1 >>> 8;
											}
											case '2':
											{
												idx += 11;
												return X11_GOLDENROD_2 >>> 8;
											}
											case '3':
											{
												idx += 11;
												return X11_GOLDENROD_3 >>> 8;
											}
											case '4':
											{
												idx += 11;
												return X11_GOLDENROD_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[10] | 0x20)
									{
										case '1':
										{
											idx += 11;
											return X11_GOLDENROD_1 >>> 8;
										}
										case '2':
										{
											idx += 11;
											return X11_GOLDENROD_2 >>> 8;
										}
										case '3':
										{
											idx += 11;
											return X11_GOLDENROD_3 >>> 8;
										}
										case '4':
										{
											idx += 11;
											return X11_GOLDENROD_4 >>> 8;
										}
									}
								}
								case '1':
								{
									idx += 10;
									return X11_GOLDENROD1 >>> 8;
								}
								case '2':
								{
									idx += 10;
									return X11_GOLDENROD2 >>> 8;
								}
								case '3':
								{
									idx += 10;
									return X11_GOLDENROD3 >>> 8;
								}
								case '4':
								{
									idx += 10;
									return X11_GOLDENROD4 >>> 8;
								}
							}
							idx += 9;
							return X11_GOLDENROD >>> 8;
						}
					}
					idx += 4;
					return X11_GOLD >>> 8;
				}
				case 'r':
				{
					switch (str[2] | 0x20)
					{
						case 'a':
						{
							if (str[3] != 'Y')
							{
								return -1;
							}
							switch (str[4] | 0x20)
							{
								case ' ':
								{
									if (str[4])
									{
										switch (str[5] | 0x20)
										{
											case '0':
											{
												idx += 6;
												return X11_GRAY_0 >>> 8;
											}
											case '1':
											{
												switch (str[6] | 0x20)
												{
													case '0':
													{
														switch (str[7] | 0x20)
														{
															case '0':
															{
																idx += 8;
																return X11_GRAY_100 >>> 8;
															}
														}
														idx += 7;
														return X11_GRAY_10 >>> 8;
													}
													case '1':
													{
														idx += 7;
														return X11_GRAY_11 >>> 8;
													}
													case '2':
													{
														idx += 7;
														return X11_GRAY_12 >>> 8;
													}
													case '3':
													{
														idx += 7;
														return X11_GRAY_13 >>> 8;
													}
													case '4':
													{
														idx += 7;
														return X11_GRAY_14 >>> 8;
													}
													case '5':
													{
														idx += 7;
														return X11_GRAY_15 >>> 8;
													}
													case '6':
													{
														idx += 7;
														return X11_GRAY_16 >>> 8;
													}
													case '7':
													{
														idx += 7;
														return X11_GRAY_17 >>> 8;
													}
													case '8':
													{
														idx += 7;
														return X11_GRAY_18 >>> 8;
													}
													case '9':
													{
														idx += 7;
														return X11_GRAY_19 >>> 8;
													}
												}
												idx += 6;
												return X11_GRAY_1 >>> 8;
											}
											case '2':
											{
												switch (str[6] | 0x20)
												{
													case '0':
													{
														idx += 7;
														return X11_GRAY_20 >>> 8;
													}
													case '1':
													{
														idx += 7;
														return X11_GRAY_21 >>> 8;
													}
													case '2':
													{
														idx += 7;
														return X11_GRAY_22 >>> 8;
													}
													case '3':
													{
														idx += 7;
														return X11_GRAY_23 >>> 8;
													}
													case '4':
													{
														idx += 7;
														return X11_GRAY_24 >>> 8;
													}
													case '5':
													{
														idx += 7;
														return X11_GRAY_25 >>> 8;
													}
													case '6':
													{
														idx += 7;
														return X11_GRAY_26 >>> 8;
													}
													case '7':
													{
														idx += 7;
														return X11_GRAY_27 >>> 8;
													}
													case '8':
													{
														idx += 7;
														return X11_GRAY_28 >>> 8;
													}
													case '9':
													{
														idx += 7;
														return X11_GRAY_29 >>> 8;
													}
												}
												idx += 6;
												return X11_GRAY_2 >>> 8;
											}
											case '3':
											{
												switch (str[6] | 0x20)
												{
													case '0':
													{
														idx += 7;
														return X11_GRAY_30 >>> 8;
													}
													case '1':
													{
														idx += 7;
														return X11_GRAY_31 >>> 8;
													}
													case '2':
													{
														idx += 7;
														return X11_GRAY_32 >>> 8;
													}
													case '3':
													{
														idx += 7;
														return X11_GRAY_33 >>> 8;
													}
													case '4':
													{
														idx += 7;
														return X11_GRAY_34 >>> 8;
													}
													case '5':
													{
														idx += 7;
														return X11_GRAY_35 >>> 8;
													}
													case '6':
													{
														idx += 7;
														return X11_GRAY_36 >>> 8;
													}
													case '7':
													{
														idx += 7;
														return X11_GRAY_37 >>> 8;
													}
													case '8':
													{
														idx += 7;
														return X11_GRAY_38 >>> 8;
													}
													case '9':
													{
														idx += 7;
														return X11_GRAY_39 >>> 8;
													}
												}
												idx += 6;
												return X11_GRAY_3 >>> 8;
											}
											case '4':
											{
												switch (str[6] | 0x20)
												{
													case '0':
													{
														idx += 7;
														return X11_GRAY_40 >>> 8;
													}
													case '1':
													{
														idx += 7;
														return X11_GRAY_41 >>> 8;
													}
													case '2':
													{
														idx += 7;
														return X11_GRAY_42 >>> 8;
													}
													case '3':
													{
														idx += 7;
														return X11_GRAY_43 >>> 8;
													}
													case '4':
													{
														idx += 7;
														return X11_GRAY_44 >>> 8;
													}
													case '5':
													{
														idx += 7;
														return X11_GRAY_45 >>> 8;
													}
													case '6':
													{
														idx += 7;
														return X11_GRAY_46 >>> 8;
													}
													case '7':
													{
														idx += 7;
														return X11_GRAY_47 >>> 8;
													}
													case '8':
													{
														idx += 7;
														return X11_GRAY_48 >>> 8;
													}
													case '9':
													{
														idx += 7;
														return X11_GRAY_49 >>> 8;
													}
												}
												idx += 6;
												return X11_GRAY_4 >>> 8;
											}
											case '5':
											{
												switch (str[6] | 0x20)
												{
													case '0':
													{
														idx += 7;
														return X11_GRAY_50 >>> 8;
													}
													case '1':
													{
														idx += 7;
														return X11_GRAY_51 >>> 8;
													}
													case '2':
													{
														idx += 7;
														return X11_GRAY_52 >>> 8;
													}
													case '3':
													{
														idx += 7;
														return X11_GRAY_53 >>> 8;
													}
													case '4':
													{
														idx += 7;
														return X11_GRAY_54 >>> 8;
													}
													case '5':
													{
														idx += 7;
														return X11_GRAY_55 >>> 8;
													}
													case '6':
													{
														idx += 7;
														return X11_GRAY_56 >>> 8;
													}
													case '7':
													{
														idx += 7;
														return X11_GRAY_57 >>> 8;
													}
													case '8':
													{
														idx += 7;
														return X11_GRAY_58 >>> 8;
													}
													case '9':
													{
														idx += 7;
														return X11_GRAY_59 >>> 8;
													}
												}
												idx += 6;
												return X11_GRAY_5 >>> 8;
											}
											case '6':
											{
												switch (str[6] | 0x20)
												{
													case '0':
													{
														idx += 7;
														return X11_GRAY_60 >>> 8;
													}
													case '1':
													{
														idx += 7;
														return X11_GRAY_61 >>> 8;
													}
													case '2':
													{
														idx += 7;
														return X11_GRAY_62 >>> 8;
													}
													case '3':
													{
														idx += 7;
														return X11_GRAY_63 >>> 8;
													}
													case '4':
													{
														idx += 7;
														return X11_GRAY_64 >>> 8;
													}
													case '5':
													{
														idx += 7;
														return X11_GRAY_65 >>> 8;
													}
													case '6':
													{
														idx += 7;
														return X11_GRAY_66 >>> 8;
													}
													case '7':
													{
														idx += 7;
														return X11_GRAY_67 >>> 8;
													}
													case '8':
													{
														idx += 7;
														return X11_GRAY_68 >>> 8;
													}
													case '9':
													{
														idx += 7;
														return X11_GRAY_69 >>> 8;
													}
												}
												idx += 6;
												return X11_GRAY_6 >>> 8;
											}
											case '7':
											{
												switch (str[6] | 0x20)
												{
													case '0':
													{
														idx += 7;
														return X11_GRAY_70 >>> 8;
													}
													case '1':
													{
														idx += 7;
														return X11_GRAY_71 >>> 8;
													}
													case '2':
													{
														idx += 7;
														return X11_GRAY_72 >>> 8;
													}
													case '3':
													{
														idx += 7;
														return X11_GRAY_73 >>> 8;
													}
													case '4':
													{
														idx += 7;
														return X11_GRAY_74 >>> 8;
													}
													case '5':
													{
														idx += 7;
														return X11_GRAY_75 >>> 8;
													}
													case '6':
													{
														idx += 7;
														return X11_GRAY_76 >>> 8;
													}
													case '7':
													{
														idx += 7;
														return X11_GRAY_77 >>> 8;
													}
													case '8':
													{
														idx += 7;
														return X11_GRAY_78 >>> 8;
													}
													case '9':
													{
														idx += 7;
														return X11_GRAY_79 >>> 8;
													}
												}
												idx += 6;
												return X11_GRAY_7 >>> 8;
											}
											case '8':
											{
												switch (str[6] | 0x20)
												{
													case '0':
													{
														idx += 7;
														return X11_GRAY_80 >>> 8;
													}
													case '1':
													{
														idx += 7;
														return X11_GRAY_81 >>> 8;
													}
													case '2':
													{
														idx += 7;
														return X11_GRAY_82 >>> 8;
													}
													case '3':
													{
														idx += 7;
														return X11_GRAY_83 >>> 8;
													}
													case '4':
													{
														idx += 7;
														return X11_GRAY_84 >>> 8;
													}
													case '5':
													{
														idx += 7;
														return X11_GRAY_85 >>> 8;
													}
													case '6':
													{
														idx += 7;
														return X11_GRAY_86 >>> 8;
													}
													case '7':
													{
														idx += 7;
														return X11_GRAY_87 >>> 8;
													}
													case '8':
													{
														idx += 7;
														return X11_GRAY_88 >>> 8;
													}
													case '9':
													{
														idx += 7;
														return X11_GRAY_89 >>> 8;
													}
												}
												idx += 6;
												return X11_GRAY_8 >>> 8;
											}
											case '9':
											{
												switch (str[6] | 0x20)
												{
													case '0':
													{
														idx += 7;
														return X11_GRAY_90 >>> 8;
													}
													case '1':
													{
														idx += 7;
														return X11_GRAY_91 >>> 8;
													}
													case '2':
													{
														idx += 7;
														return X11_GRAY_92 >>> 8;
													}
													case '3':
													{
														idx += 7;
														return X11_GRAY_93 >>> 8;
													}
													case '4':
													{
														idx += 7;
														return X11_GRAY_94 >>> 8;
													}
													case '5':
													{
														idx += 7;
														return X11_GRAY_95 >>> 8;
													}
													case '6':
													{
														idx += 7;
														return X11_GRAY_96 >>> 8;
													}
													case '7':
													{
														idx += 7;
														return X11_GRAY_97 >>> 8;
													}
													case '8':
													{
														idx += 7;
														return X11_GRAY_98 >>> 8;
													}
													case '9':
													{
														idx += 7;
														return X11_GRAY_99 >>> 8;
													}
												}
												idx += 6;
												return X11_GRAY_9 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[5] | 0x20)
									{
										case '0':
										{
											idx += 6;
											return X11_GRAY_0 >>> 8;
										}
										case '1':
										{
											switch (str[6] | 0x20)
											{
												case '0':
												{
													switch (str[7] | 0x20)
													{
														case '0':
														{
															idx += 8;
															return X11_GRAY_100 >>> 8;
														}
													}
													idx += 7;
													return X11_GRAY_10 >>> 8;
												}
												case '1':
												{
													idx += 7;
													return X11_GRAY_11 >>> 8;
												}
												case '2':
												{
													idx += 7;
													return X11_GRAY_12 >>> 8;
												}
												case '3':
												{
													idx += 7;
													return X11_GRAY_13 >>> 8;
												}
												case '4':
												{
													idx += 7;
													return X11_GRAY_14 >>> 8;
												}
												case '5':
												{
													idx += 7;
													return X11_GRAY_15 >>> 8;
												}
												case '6':
												{
													idx += 7;
													return X11_GRAY_16 >>> 8;
												}
												case '7':
												{
													idx += 7;
													return X11_GRAY_17 >>> 8;
												}
												case '8':
												{
													idx += 7;
													return X11_GRAY_18 >>> 8;
												}
												case '9':
												{
													idx += 7;
													return X11_GRAY_19 >>> 8;
												}
											}
											idx += 6;
											return X11_GRAY_1 >>> 8;
										}
										case '2':
										{
											switch (str[6] | 0x20)
											{
												case '0':
												{
													idx += 7;
													return X11_GRAY_20 >>> 8;
												}
												case '1':
												{
													idx += 7;
													return X11_GRAY_21 >>> 8;
												}
												case '2':
												{
													idx += 7;
													return X11_GRAY_22 >>> 8;
												}
												case '3':
												{
													idx += 7;
													return X11_GRAY_23 >>> 8;
												}
												case '4':
												{
													idx += 7;
													return X11_GRAY_24 >>> 8;
												}
												case '5':
												{
													idx += 7;
													return X11_GRAY_25 >>> 8;
												}
												case '6':
												{
													idx += 7;
													return X11_GRAY_26 >>> 8;
												}
												case '7':
												{
													idx += 7;
													return X11_GRAY_27 >>> 8;
												}
												case '8':
												{
													idx += 7;
													return X11_GRAY_28 >>> 8;
												}
												case '9':
												{
													idx += 7;
													return X11_GRAY_29 >>> 8;
												}
											}
											idx += 6;
											return X11_GRAY_2 >>> 8;
										}
										case '3':
										{
											switch (str[6] | 0x20)
											{
												case '0':
												{
													idx += 7;
													return X11_GRAY_30 >>> 8;
												}
												case '1':
												{
													idx += 7;
													return X11_GRAY_31 >>> 8;
												}
												case '2':
												{
													idx += 7;
													return X11_GRAY_32 >>> 8;
												}
												case '3':
												{
													idx += 7;
													return X11_GRAY_33 >>> 8;
												}
												case '4':
												{
													idx += 7;
													return X11_GRAY_34 >>> 8;
												}
												case '5':
												{
													idx += 7;
													return X11_GRAY_35 >>> 8;
												}
												case '6':
												{
													idx += 7;
													return X11_GRAY_36 >>> 8;
												}
												case '7':
												{
													idx += 7;
													return X11_GRAY_37 >>> 8;
												}
												case '8':
												{
													idx += 7;
													return X11_GRAY_38 >>> 8;
												}
												case '9':
												{
													idx += 7;
													return X11_GRAY_39 >>> 8;
												}
											}
											idx += 6;
											return X11_GRAY_3 >>> 8;
										}
										case '4':
										{
											switch (str[6] | 0x20)
											{
												case '0':
												{
													idx += 7;
													return X11_GRAY_40 >>> 8;
												}
												case '1':
												{
													idx += 7;
													return X11_GRAY_41 >>> 8;
												}
												case '2':
												{
													idx += 7;
													return X11_GRAY_42 >>> 8;
												}
												case '3':
												{
													idx += 7;
													return X11_GRAY_43 >>> 8;
												}
												case '4':
												{
													idx += 7;
													return X11_GRAY_44 >>> 8;
												}
												case '5':
												{
													idx += 7;
													return X11_GRAY_45 >>> 8;
												}
												case '6':
												{
													idx += 7;
													return X11_GRAY_46 >>> 8;
												}
												case '7':
												{
													idx += 7;
													return X11_GRAY_47 >>> 8;
												}
												case '8':
												{
													idx += 7;
													return X11_GRAY_48 >>> 8;
												}
												case '9':
												{
													idx += 7;
													return X11_GRAY_49 >>> 8;
												}
											}
											idx += 6;
											return X11_GRAY_4 >>> 8;
										}
										case '5':
										{
											switch (str[6] | 0x20)
											{
												case '0':
												{
													idx += 7;
													return X11_GRAY_50 >>> 8;
												}
												case '1':
												{
													idx += 7;
													return X11_GRAY_51 >>> 8;
												}
												case '2':
												{
													idx += 7;
													return X11_GRAY_52 >>> 8;
												}
												case '3':
												{
													idx += 7;
													return X11_GRAY_53 >>> 8;
												}
												case '4':
												{
													idx += 7;
													return X11_GRAY_54 >>> 8;
												}
												case '5':
												{
													idx += 7;
													return X11_GRAY_55 >>> 8;
												}
												case '6':
												{
													idx += 7;
													return X11_GRAY_56 >>> 8;
												}
												case '7':
												{
													idx += 7;
													return X11_GRAY_57 >>> 8;
												}
												case '8':
												{
													idx += 7;
													return X11_GRAY_58 >>> 8;
												}
												case '9':
												{
													idx += 7;
													return X11_GRAY_59 >>> 8;
												}
											}
											idx += 6;
											return X11_GRAY_5 >>> 8;
										}
										case '6':
										{
											switch (str[6] | 0x20)
											{
												case '0':
												{
													idx += 7;
													return X11_GRAY_60 >>> 8;
												}
												case '1':
												{
													idx += 7;
													return X11_GRAY_61 >>> 8;
												}
												case '2':
												{
													idx += 7;
													return X11_GRAY_62 >>> 8;
												}
												case '3':
												{
													idx += 7;
													return X11_GRAY_63 >>> 8;
												}
												case '4':
												{
													idx += 7;
													return X11_GRAY_64 >>> 8;
												}
												case '5':
												{
													idx += 7;
													return X11_GRAY_65 >>> 8;
												}
												case '6':
												{
													idx += 7;
													return X11_GRAY_66 >>> 8;
												}
												case '7':
												{
													idx += 7;
													return X11_GRAY_67 >>> 8;
												}
												case '8':
												{
													idx += 7;
													return X11_GRAY_68 >>> 8;
												}
												case '9':
												{
													idx += 7;
													return X11_GRAY_69 >>> 8;
												}
											}
											idx += 6;
											return X11_GRAY_6 >>> 8;
										}
										case '7':
										{
											switch (str[6] | 0x20)
											{
												case '0':
												{
													idx += 7;
													return X11_GRAY_70 >>> 8;
												}
												case '1':
												{
													idx += 7;
													return X11_GRAY_71 >>> 8;
												}
												case '2':
												{
													idx += 7;
													return X11_GRAY_72 >>> 8;
												}
												case '3':
												{
													idx += 7;
													return X11_GRAY_73 >>> 8;
												}
												case '4':
												{
													idx += 7;
													return X11_GRAY_74 >>> 8;
												}
												case '5':
												{
													idx += 7;
													return X11_GRAY_75 >>> 8;
												}
												case '6':
												{
													idx += 7;
													return X11_GRAY_76 >>> 8;
												}
												case '7':
												{
													idx += 7;
													return X11_GRAY_77 >>> 8;
												}
												case '8':
												{
													idx += 7;
													return X11_GRAY_78 >>> 8;
												}
												case '9':
												{
													idx += 7;
													return X11_GRAY_79 >>> 8;
												}
											}
											idx += 6;
											return X11_GRAY_7 >>> 8;
										}
										case '8':
										{
											switch (str[6] | 0x20)
											{
												case '0':
												{
													idx += 7;
													return X11_GRAY_80 >>> 8;
												}
												case '1':
												{
													idx += 7;
													return X11_GRAY_81 >>> 8;
												}
												case '2':
												{
													idx += 7;
													return X11_GRAY_82 >>> 8;
												}
												case '3':
												{
													idx += 7;
													return X11_GRAY_83 >>> 8;
												}
												case '4':
												{
													idx += 7;
													return X11_GRAY_84 >>> 8;
												}
												case '5':
												{
													idx += 7;
													return X11_GRAY_85 >>> 8;
												}
												case '6':
												{
													idx += 7;
													return X11_GRAY_86 >>> 8;
												}
												case '7':
												{
													idx += 7;
													return X11_GRAY_87 >>> 8;
												}
												case '8':
												{
													idx += 7;
													return X11_GRAY_88 >>> 8;
												}
												case '9':
												{
													idx += 7;
													return X11_GRAY_89 >>> 8;
												}
											}
											idx += 6;
											return X11_GRAY_8 >>> 8;
										}
										case '9':
										{
											switch (str[6] | 0x20)
											{
												case '0':
												{
													idx += 7;
													return X11_GRAY_90 >>> 8;
												}
												case '1':
												{
													idx += 7;
													return X11_GRAY_91 >>> 8;
												}
												case '2':
												{
													idx += 7;
													return X11_GRAY_92 >>> 8;
												}
												case '3':
												{
													idx += 7;
													return X11_GRAY_93 >>> 8;
												}
												case '4':
												{
													idx += 7;
													return X11_GRAY_94 >>> 8;
												}
												case '5':
												{
													idx += 7;
													return X11_GRAY_95 >>> 8;
												}
												case '6':
												{
													idx += 7;
													return X11_GRAY_96 >>> 8;
												}
												case '7':
												{
													idx += 7;
													return X11_GRAY_97 >>> 8;
												}
												case '8':
												{
													idx += 7;
													return X11_GRAY_98 >>> 8;
												}
												case '9':
												{
													idx += 7;
													return X11_GRAY_99 >>> 8;
												}
											}
											idx += 6;
											return X11_GRAY_9 >>> 8;
										}
									}
								}
								case '0':
								{
									idx += 5;
									return X11_GRAY0 >>> 8;
								}
								case '1':
								{
									switch (str[5] | 0x20)
									{
										case '0':
										{
											switch (str[6] | 0x20)
											{
												case '0':
												{
													idx += 7;
													return X11_GRAY100 >>> 8;
												}
											}
											idx += 6;
											return X11_GRAY10 >>> 8;
										}
										case '1':
										{
											idx += 6;
											return X11_GRAY11 >>> 8;
										}
										case '2':
										{
											idx += 6;
											return X11_GRAY12 >>> 8;
										}
										case '3':
										{
											idx += 6;
											return X11_GRAY13 >>> 8;
										}
										case '4':
										{
											idx += 6;
											return X11_GRAY14 >>> 8;
										}
										case '5':
										{
											idx += 6;
											return X11_GRAY15 >>> 8;
										}
										case '6':
										{
											idx += 6;
											return X11_GRAY16 >>> 8;
										}
										case '7':
										{
											idx += 6;
											return X11_GRAY17 >>> 8;
										}
										case '8':
										{
											idx += 6;
											return X11_GRAY18 >>> 8;
										}
										case '9':
										{
											idx += 6;
											return X11_GRAY19 >>> 8;
										}
									}
									idx += 5;
									return X11_GRAY1 >>> 8;
								}
								case '2':
								{
									switch (str[5] | 0x20)
									{
										case '0':
										{
											idx += 6;
											return X11_GRAY20 >>> 8;
										}
										case '1':
										{
											idx += 6;
											return X11_GRAY21 >>> 8;
										}
										case '2':
										{
											idx += 6;
											return X11_GRAY22 >>> 8;
										}
										case '3':
										{
											idx += 6;
											return X11_GRAY23 >>> 8;
										}
										case '4':
										{
											idx += 6;
											return X11_GRAY24 >>> 8;
										}
										case '5':
										{
											idx += 6;
											return X11_GRAY25 >>> 8;
										}
										case '6':
										{
											idx += 6;
											return X11_GRAY26 >>> 8;
										}
										case '7':
										{
											idx += 6;
											return X11_GRAY27 >>> 8;
										}
										case '8':
										{
											idx += 6;
											return X11_GRAY28 >>> 8;
										}
										case '9':
										{
											idx += 6;
											return X11_GRAY29 >>> 8;
										}
									}
									idx += 5;
									return X11_GRAY2 >>> 8;
								}
								case '3':
								{
									switch (str[5] | 0x20)
									{
										case '0':
										{
											idx += 6;
											return X11_GRAY30 >>> 8;
										}
										case '1':
										{
											idx += 6;
											return X11_GRAY31 >>> 8;
										}
										case '2':
										{
											idx += 6;
											return X11_GRAY32 >>> 8;
										}
										case '3':
										{
											idx += 6;
											return X11_GRAY33 >>> 8;
										}
										case '4':
										{
											idx += 6;
											return X11_GRAY34 >>> 8;
										}
										case '5':
										{
											idx += 6;
											return X11_GRAY35 >>> 8;
										}
										case '6':
										{
											idx += 6;
											return X11_GRAY36 >>> 8;
										}
										case '7':
										{
											idx += 6;
											return X11_GRAY37 >>> 8;
										}
										case '8':
										{
											idx += 6;
											return X11_GRAY38 >>> 8;
										}
										case '9':
										{
											idx += 6;
											return X11_GRAY39 >>> 8;
										}
									}
									idx += 5;
									return X11_GRAY3 >>> 8;
								}
								case '4':
								{
									switch (str[5] | 0x20)
									{
										case '0':
										{
											idx += 6;
											return X11_GRAY40 >>> 8;
										}
										case '1':
										{
											idx += 6;
											return X11_GRAY41 >>> 8;
										}
										case '2':
										{
											idx += 6;
											return X11_GRAY42 >>> 8;
										}
										case '3':
										{
											idx += 6;
											return X11_GRAY43 >>> 8;
										}
										case '4':
										{
											idx += 6;
											return X11_GRAY44 >>> 8;
										}
										case '5':
										{
											idx += 6;
											return X11_GRAY45 >>> 8;
										}
										case '6':
										{
											idx += 6;
											return X11_GRAY46 >>> 8;
										}
										case '7':
										{
											idx += 6;
											return X11_GRAY47 >>> 8;
										}
										case '8':
										{
											idx += 6;
											return X11_GRAY48 >>> 8;
										}
										case '9':
										{
											idx += 6;
											return X11_GRAY49 >>> 8;
										}
									}
									idx += 5;
									return X11_GRAY4 >>> 8;
								}
								case '5':
								{
									switch (str[5] | 0x20)
									{
										case '0':
										{
											idx += 6;
											return X11_GRAY50 >>> 8;
										}
										case '1':
										{
											idx += 6;
											return X11_GRAY51 >>> 8;
										}
										case '2':
										{
											idx += 6;
											return X11_GRAY52 >>> 8;
										}
										case '3':
										{
											idx += 6;
											return X11_GRAY53 >>> 8;
										}
										case '4':
										{
											idx += 6;
											return X11_GRAY54 >>> 8;
										}
										case '5':
										{
											idx += 6;
											return X11_GRAY55 >>> 8;
										}
										case '6':
										{
											idx += 6;
											return X11_GRAY56 >>> 8;
										}
										case '7':
										{
											idx += 6;
											return X11_GRAY57 >>> 8;
										}
										case '8':
										{
											idx += 6;
											return X11_GRAY58 >>> 8;
										}
										case '9':
										{
											idx += 6;
											return X11_GRAY59 >>> 8;
										}
									}
									idx += 5;
									return X11_GRAY5 >>> 8;
								}
								case '6':
								{
									switch (str[5] | 0x20)
									{
										case '0':
										{
											idx += 6;
											return X11_GRAY60 >>> 8;
										}
										case '1':
										{
											idx += 6;
											return X11_GRAY61 >>> 8;
										}
										case '2':
										{
											idx += 6;
											return X11_GRAY62 >>> 8;
										}
										case '3':
										{
											idx += 6;
											return X11_GRAY63 >>> 8;
										}
										case '4':
										{
											idx += 6;
											return X11_GRAY64 >>> 8;
										}
										case '5':
										{
											idx += 6;
											return X11_GRAY65 >>> 8;
										}
										case '6':
										{
											idx += 6;
											return X11_GRAY66 >>> 8;
										}
										case '7':
										{
											idx += 6;
											return X11_GRAY67 >>> 8;
										}
										case '8':
										{
											idx += 6;
											return X11_GRAY68 >>> 8;
										}
										case '9':
										{
											idx += 6;
											return X11_GRAY69 >>> 8;
										}
									}
									idx += 5;
									return X11_GRAY6 >>> 8;
								}
								case '7':
								{
									switch (str[5] | 0x20)
									{
										case '0':
										{
											idx += 6;
											return X11_GRAY70 >>> 8;
										}
										case '1':
										{
											idx += 6;
											return X11_GRAY71 >>> 8;
										}
										case '2':
										{
											idx += 6;
											return X11_GRAY72 >>> 8;
										}
										case '3':
										{
											idx += 6;
											return X11_GRAY73 >>> 8;
										}
										case '4':
										{
											idx += 6;
											return X11_GRAY74 >>> 8;
										}
										case '5':
										{
											idx += 6;
											return X11_GRAY75 >>> 8;
										}
										case '6':
										{
											idx += 6;
											return X11_GRAY76 >>> 8;
										}
										case '7':
										{
											idx += 6;
											return X11_GRAY77 >>> 8;
										}
										case '8':
										{
											idx += 6;
											return X11_GRAY78 >>> 8;
										}
										case '9':
										{
											idx += 6;
											return X11_GRAY79 >>> 8;
										}
									}
									idx += 5;
									return X11_GRAY7 >>> 8;
								}
								case '8':
								{
									switch (str[5] | 0x20)
									{
										case '0':
										{
											idx += 6;
											return X11_GRAY80 >>> 8;
										}
										case '1':
										{
											idx += 6;
											return X11_GRAY81 >>> 8;
										}
										case '2':
										{
											idx += 6;
											return X11_GRAY82 >>> 8;
										}
										case '3':
										{
											idx += 6;
											return X11_GRAY83 >>> 8;
										}
										case '4':
										{
											idx += 6;
											return X11_GRAY84 >>> 8;
										}
										case '5':
										{
											idx += 6;
											return X11_GRAY85 >>> 8;
										}
										case '6':
										{
											idx += 6;
											return X11_GRAY86 >>> 8;
										}
										case '7':
										{
											idx += 6;
											return X11_GRAY87 >>> 8;
										}
										case '8':
										{
											idx += 6;
											return X11_GRAY88 >>> 8;
										}
										case '9':
										{
											idx += 6;
											return X11_GRAY89 >>> 8;
										}
									}
									idx += 5;
									return X11_GRAY8 >>> 8;
								}
								case '9':
								{
									switch (str[5] | 0x20)
									{
										case '0':
										{
											idx += 6;
											return X11_GRAY90 >>> 8;
										}
										case '1':
										{
											idx += 6;
											return X11_GRAY91 >>> 8;
										}
										case '2':
										{
											idx += 6;
											return X11_GRAY92 >>> 8;
										}
										case '3':
										{
											idx += 6;
											return X11_GRAY93 >>> 8;
										}
										case '4':
										{
											idx += 6;
											return X11_GRAY94 >>> 8;
										}
										case '5':
										{
											idx += 6;
											return X11_GRAY95 >>> 8;
										}
										case '6':
										{
											idx += 6;
											return X11_GRAY96 >>> 8;
										}
										case '7':
										{
											idx += 6;
											return X11_GRAY97 >>> 8;
										}
										case '8':
										{
											idx += 6;
											return X11_GRAY98 >>> 8;
										}
										case '9':
										{
											idx += 6;
											return X11_GRAY99 >>> 8;
										}
									}
									idx += 5;
									return X11_GRAY9 >>> 8;
								}
							}
							idx += 4;
							return X11_GRAY >>> 8;
						}
						case 'e':
						{
							switch (str[3] | 0x20)
							{
								case 'e':
								{
									if (str[4] != 'N')
									{
										return -1;
									}
									switch (str[5] | 0x20)
									{
										case ' ':
										{
											if (str[5])
											{
												switch (str[6] | 0x20)
												{
													case '1':
													{
														idx += 7;
														return X11_GREEN_1 >>> 8;
													}
													case '2':
													{
														idx += 7;
														return X11_GREEN_2 >>> 8;
													}
													case '3':
													{
														idx += 7;
														return X11_GREEN_3 >>> 8;
													}
													case '4':
													{
														idx += 7;
														return X11_GREEN_4 >>> 8;
													}
													case 'y':
													{
														if (str[7] && !strcmp(str[7], !"ELLOW", true, 5))
														{
															idx += 12;
															return X11_GREEN_YELLOW >>> 8;
														}
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[6] | 0x20)
											{
												case '1':
												{
													idx += 7;
													return X11_GREEN_1 >>> 8;
												}
												case '2':
												{
													idx += 7;
													return X11_GREEN_2 >>> 8;
												}
												case '3':
												{
													idx += 7;
													return X11_GREEN_3 >>> 8;
												}
												case '4':
												{
													idx += 7;
													return X11_GREEN_4 >>> 8;
												}
												case 'y':
												{
													if (str[7] && !strcmp(str[7], !"ELLOW", true, 5))
													{
														idx += 12;
														return X11_GREEN_YELLOW >>> 8;
													}
												}
											}
										}
										case '1':
										{
											idx += 6;
											return X11_GREEN1 >>> 8;
										}
										case '2':
										{
											idx += 6;
											return X11_GREEN2 >>> 8;
										}
										case '3':
										{
											idx += 6;
											return X11_GREEN3 >>> 8;
										}
										case '4':
										{
											idx += 6;
											return X11_GREEN4 >>> 8;
										}
										case 'y':
										{
											if (str[6] && !strcmp(str[6], !"ELLOW", true, 5))
											{
												idx += 11;
												return X11_GREENYELLOW >>> 8;
											}
										}
									}
									idx += 5;
									return X11_GREEN >>> 8;
								}
								case 'y':
								{
									switch (str[4] | 0x20)
									{
										case ' ':
										{
											if (str[4])
											{
												switch (str[5] | 0x20)
												{
													case '0':
													{
														idx += 6;
														return X11_GREY_0 >>> 8;
													}
													case '1':
													{
														switch (str[6] | 0x20)
														{
															case '0':
															{
																switch (str[7] | 0x20)
																{
																	case '0':
																	{
																		idx += 8;
																		return X11_GREY_100 >>> 8;
																	}
																}
																idx += 7;
																return X11_GREY_10 >>> 8;
															}
															case '1':
															{
																idx += 7;
																return X11_GREY_11 >>> 8;
															}
															case '2':
															{
																idx += 7;
																return X11_GREY_12 >>> 8;
															}
															case '3':
															{
																idx += 7;
																return X11_GREY_13 >>> 8;
															}
															case '4':
															{
																idx += 7;
																return X11_GREY_14 >>> 8;
															}
															case '5':
															{
																idx += 7;
																return X11_GREY_15 >>> 8;
															}
															case '6':
															{
																idx += 7;
																return X11_GREY_16 >>> 8;
															}
															case '7':
															{
																idx += 7;
																return X11_GREY_17 >>> 8;
															}
															case '8':
															{
																idx += 7;
																return X11_GREY_18 >>> 8;
															}
															case '9':
															{
																idx += 7;
																return X11_GREY_19 >>> 8;
															}
														}
														idx += 6;
														return X11_GREY_1 >>> 8;
													}
													case '2':
													{
														switch (str[6] | 0x20)
														{
															case '0':
															{
																idx += 7;
																return X11_GREY_20 >>> 8;
															}
															case '1':
															{
																idx += 7;
																return X11_GREY_21 >>> 8;
															}
															case '2':
															{
																idx += 7;
																return X11_GREY_22 >>> 8;
															}
															case '3':
															{
																idx += 7;
																return X11_GREY_23 >>> 8;
															}
															case '4':
															{
																idx += 7;
																return X11_GREY_24 >>> 8;
															}
															case '5':
															{
																idx += 7;
																return X11_GREY_25 >>> 8;
															}
															case '6':
															{
																idx += 7;
																return X11_GREY_26 >>> 8;
															}
															case '7':
															{
																idx += 7;
																return X11_GREY_27 >>> 8;
															}
															case '8':
															{
																idx += 7;
																return X11_GREY_28 >>> 8;
															}
															case '9':
															{
																idx += 7;
																return X11_GREY_29 >>> 8;
															}
														}
														idx += 6;
														return X11_GREY_2 >>> 8;
													}
													case '3':
													{
														switch (str[6] | 0x20)
														{
															case '0':
															{
																idx += 7;
																return X11_GREY_30 >>> 8;
															}
															case '1':
															{
																idx += 7;
																return X11_GREY_31 >>> 8;
															}
															case '2':
															{
																idx += 7;
																return X11_GREY_32 >>> 8;
															}
															case '3':
															{
																idx += 7;
																return X11_GREY_33 >>> 8;
															}
															case '4':
															{
																idx += 7;
																return X11_GREY_34 >>> 8;
															}
															case '5':
															{
																idx += 7;
																return X11_GREY_35 >>> 8;
															}
															case '6':
															{
																idx += 7;
																return X11_GREY_36 >>> 8;
															}
															case '7':
															{
																idx += 7;
																return X11_GREY_37 >>> 8;
															}
															case '8':
															{
																idx += 7;
																return X11_GREY_38 >>> 8;
															}
															case '9':
															{
																idx += 7;
																return X11_GREY_39 >>> 8;
															}
														}
														idx += 6;
														return X11_GREY_3 >>> 8;
													}
													case '4':
													{
														switch (str[6] | 0x20)
														{
															case '0':
															{
																idx += 7;
																return X11_GREY_40 >>> 8;
															}
															case '1':
															{
																idx += 7;
																return X11_GREY_41 >>> 8;
															}
															case '2':
															{
																idx += 7;
																return X11_GREY_42 >>> 8;
															}
															case '3':
															{
																idx += 7;
																return X11_GREY_43 >>> 8;
															}
															case '4':
															{
																idx += 7;
																return X11_GREY_44 >>> 8;
															}
															case '5':
															{
																idx += 7;
																return X11_GREY_45 >>> 8;
															}
															case '6':
															{
																idx += 7;
																return X11_GREY_46 >>> 8;
															}
															case '7':
															{
																idx += 7;
																return X11_GREY_47 >>> 8;
															}
															case '8':
															{
																idx += 7;
																return X11_GREY_48 >>> 8;
															}
															case '9':
															{
																idx += 7;
																return X11_GREY_49 >>> 8;
															}
														}
														idx += 6;
														return X11_GREY_4 >>> 8;
													}
													case '5':
													{
														switch (str[6] | 0x20)
														{
															case '0':
															{
																idx += 7;
																return X11_GREY_50 >>> 8;
															}
															case '1':
															{
																idx += 7;
																return X11_GREY_51 >>> 8;
															}
															case '2':
															{
																idx += 7;
																return X11_GREY_52 >>> 8;
															}
															case '3':
															{
																idx += 7;
																return X11_GREY_53 >>> 8;
															}
															case '4':
															{
																idx += 7;
																return X11_GREY_54 >>> 8;
															}
															case '5':
															{
																idx += 7;
																return X11_GREY_55 >>> 8;
															}
															case '6':
															{
																idx += 7;
																return X11_GREY_56 >>> 8;
															}
															case '7':
															{
																idx += 7;
																return X11_GREY_57 >>> 8;
															}
															case '8':
															{
																idx += 7;
																return X11_GREY_58 >>> 8;
															}
															case '9':
															{
																idx += 7;
																return X11_GREY_59 >>> 8;
															}
														}
														idx += 6;
														return X11_GREY_5 >>> 8;
													}
													case '6':
													{
														switch (str[6] | 0x20)
														{
															case '0':
															{
																idx += 7;
																return X11_GREY_60 >>> 8;
															}
															case '1':
															{
																idx += 7;
																return X11_GREY_61 >>> 8;
															}
															case '2':
															{
																idx += 7;
																return X11_GREY_62 >>> 8;
															}
															case '3':
															{
																idx += 7;
																return X11_GREY_63 >>> 8;
															}
															case '4':
															{
																idx += 7;
																return X11_GREY_64 >>> 8;
															}
															case '5':
															{
																idx += 7;
																return X11_GREY_65 >>> 8;
															}
															case '6':
															{
																idx += 7;
																return X11_GREY_66 >>> 8;
															}
															case '7':
															{
																idx += 7;
																return X11_GREY_67 >>> 8;
															}
															case '8':
															{
																idx += 7;
																return X11_GREY_68 >>> 8;
															}
															case '9':
															{
																idx += 7;
																return X11_GREY_69 >>> 8;
															}
														}
														idx += 6;
														return X11_GREY_6 >>> 8;
													}
													case '7':
													{
														switch (str[6] | 0x20)
														{
															case '0':
															{
																idx += 7;
																return X11_GREY_70 >>> 8;
															}
															case '1':
															{
																idx += 7;
																return X11_GREY_71 >>> 8;
															}
															case '2':
															{
																idx += 7;
																return X11_GREY_72 >>> 8;
															}
															case '3':
															{
																idx += 7;
																return X11_GREY_73 >>> 8;
															}
															case '4':
															{
																idx += 7;
																return X11_GREY_74 >>> 8;
															}
															case '5':
															{
																idx += 7;
																return X11_GREY_75 >>> 8;
															}
															case '6':
															{
																idx += 7;
																return X11_GREY_76 >>> 8;
															}
															case '7':
															{
																idx += 7;
																return X11_GREY_77 >>> 8;
															}
															case '8':
															{
																idx += 7;
																return X11_GREY_78 >>> 8;
															}
															case '9':
															{
																idx += 7;
																return X11_GREY_79 >>> 8;
															}
														}
														idx += 6;
														return X11_GREY_7 >>> 8;
													}
													case '8':
													{
														switch (str[6] | 0x20)
														{
															case '0':
															{
																idx += 7;
																return X11_GREY_80 >>> 8;
															}
															case '1':
															{
																idx += 7;
																return X11_GREY_81 >>> 8;
															}
															case '2':
															{
																idx += 7;
																return X11_GREY_82 >>> 8;
															}
															case '3':
															{
																idx += 7;
																return X11_GREY_83 >>> 8;
															}
															case '4':
															{
																idx += 7;
																return X11_GREY_84 >>> 8;
															}
															case '5':
															{
																idx += 7;
																return X11_GREY_85 >>> 8;
															}
															case '6':
															{
																idx += 7;
																return X11_GREY_86 >>> 8;
															}
															case '7':
															{
																idx += 7;
																return X11_GREY_87 >>> 8;
															}
															case '8':
															{
																idx += 7;
																return X11_GREY_88 >>> 8;
															}
															case '9':
															{
																idx += 7;
																return X11_GREY_89 >>> 8;
															}
														}
														idx += 6;
														return X11_GREY_8 >>> 8;
													}
													case '9':
													{
														switch (str[6] | 0x20)
														{
															case '0':
															{
																idx += 7;
																return X11_GREY_90 >>> 8;
															}
															case '1':
															{
																idx += 7;
																return X11_GREY_91 >>> 8;
															}
															case '2':
															{
																idx += 7;
																return X11_GREY_92 >>> 8;
															}
															case '3':
															{
																idx += 7;
																return X11_GREY_93 >>> 8;
															}
															case '4':
															{
																idx += 7;
																return X11_GREY_94 >>> 8;
															}
															case '5':
															{
																idx += 7;
																return X11_GREY_95 >>> 8;
															}
															case '6':
															{
																idx += 7;
																return X11_GREY_96 >>> 8;
															}
															case '7':
															{
																idx += 7;
																return X11_GREY_97 >>> 8;
															}
															case '8':
															{
																idx += 7;
																return X11_GREY_98 >>> 8;
															}
															case '9':
															{
																idx += 7;
																return X11_GREY_99 >>> 8;
															}
														}
														idx += 6;
														return X11_GREY_9 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[5] | 0x20)
											{
												case '0':
												{
													idx += 6;
													return X11_GREY_0 >>> 8;
												}
												case '1':
												{
													switch (str[6] | 0x20)
													{
														case '0':
														{
															switch (str[7] | 0x20)
															{
																case '0':
																{
																	idx += 8;
																	return X11_GREY_100 >>> 8;
																}
															}
															idx += 7;
															return X11_GREY_10 >>> 8;
														}
														case '1':
														{
															idx += 7;
															return X11_GREY_11 >>> 8;
														}
														case '2':
														{
															idx += 7;
															return X11_GREY_12 >>> 8;
														}
														case '3':
														{
															idx += 7;
															return X11_GREY_13 >>> 8;
														}
														case '4':
														{
															idx += 7;
															return X11_GREY_14 >>> 8;
														}
														case '5':
														{
															idx += 7;
															return X11_GREY_15 >>> 8;
														}
														case '6':
														{
															idx += 7;
															return X11_GREY_16 >>> 8;
														}
														case '7':
														{
															idx += 7;
															return X11_GREY_17 >>> 8;
														}
														case '8':
														{
															idx += 7;
															return X11_GREY_18 >>> 8;
														}
														case '9':
														{
															idx += 7;
															return X11_GREY_19 >>> 8;
														}
													}
													idx += 6;
													return X11_GREY_1 >>> 8;
												}
												case '2':
												{
													switch (str[6] | 0x20)
													{
														case '0':
														{
															idx += 7;
															return X11_GREY_20 >>> 8;
														}
														case '1':
														{
															idx += 7;
															return X11_GREY_21 >>> 8;
														}
														case '2':
														{
															idx += 7;
															return X11_GREY_22 >>> 8;
														}
														case '3':
														{
															idx += 7;
															return X11_GREY_23 >>> 8;
														}
														case '4':
														{
															idx += 7;
															return X11_GREY_24 >>> 8;
														}
														case '5':
														{
															idx += 7;
															return X11_GREY_25 >>> 8;
														}
														case '6':
														{
															idx += 7;
															return X11_GREY_26 >>> 8;
														}
														case '7':
														{
															idx += 7;
															return X11_GREY_27 >>> 8;
														}
														case '8':
														{
															idx += 7;
															return X11_GREY_28 >>> 8;
														}
														case '9':
														{
															idx += 7;
															return X11_GREY_29 >>> 8;
														}
													}
													idx += 6;
													return X11_GREY_2 >>> 8;
												}
												case '3':
												{
													switch (str[6] | 0x20)
													{
														case '0':
														{
															idx += 7;
															return X11_GREY_30 >>> 8;
														}
														case '1':
														{
															idx += 7;
															return X11_GREY_31 >>> 8;
														}
														case '2':
														{
															idx += 7;
															return X11_GREY_32 >>> 8;
														}
														case '3':
														{
															idx += 7;
															return X11_GREY_33 >>> 8;
														}
														case '4':
														{
															idx += 7;
															return X11_GREY_34 >>> 8;
														}
														case '5':
														{
															idx += 7;
															return X11_GREY_35 >>> 8;
														}
														case '6':
														{
															idx += 7;
															return X11_GREY_36 >>> 8;
														}
														case '7':
														{
															idx += 7;
															return X11_GREY_37 >>> 8;
														}
														case '8':
														{
															idx += 7;
															return X11_GREY_38 >>> 8;
														}
														case '9':
														{
															idx += 7;
															return X11_GREY_39 >>> 8;
														}
													}
													idx += 6;
													return X11_GREY_3 >>> 8;
												}
												case '4':
												{
													switch (str[6] | 0x20)
													{
														case '0':
														{
															idx += 7;
															return X11_GREY_40 >>> 8;
														}
														case '1':
														{
															idx += 7;
															return X11_GREY_41 >>> 8;
														}
														case '2':
														{
															idx += 7;
															return X11_GREY_42 >>> 8;
														}
														case '3':
														{
															idx += 7;
															return X11_GREY_43 >>> 8;
														}
														case '4':
														{
															idx += 7;
															return X11_GREY_44 >>> 8;
														}
														case '5':
														{
															idx += 7;
															return X11_GREY_45 >>> 8;
														}
														case '6':
														{
															idx += 7;
															return X11_GREY_46 >>> 8;
														}
														case '7':
														{
															idx += 7;
															return X11_GREY_47 >>> 8;
														}
														case '8':
														{
															idx += 7;
															return X11_GREY_48 >>> 8;
														}
														case '9':
														{
															idx += 7;
															return X11_GREY_49 >>> 8;
														}
													}
													idx += 6;
													return X11_GREY_4 >>> 8;
												}
												case '5':
												{
													switch (str[6] | 0x20)
													{
														case '0':
														{
															idx += 7;
															return X11_GREY_50 >>> 8;
														}
														case '1':
														{
															idx += 7;
															return X11_GREY_51 >>> 8;
														}
														case '2':
														{
															idx += 7;
															return X11_GREY_52 >>> 8;
														}
														case '3':
														{
															idx += 7;
															return X11_GREY_53 >>> 8;
														}
														case '4':
														{
															idx += 7;
															return X11_GREY_54 >>> 8;
														}
														case '5':
														{
															idx += 7;
															return X11_GREY_55 >>> 8;
														}
														case '6':
														{
															idx += 7;
															return X11_GREY_56 >>> 8;
														}
														case '7':
														{
															idx += 7;
															return X11_GREY_57 >>> 8;
														}
														case '8':
														{
															idx += 7;
															return X11_GREY_58 >>> 8;
														}
														case '9':
														{
															idx += 7;
															return X11_GREY_59 >>> 8;
														}
													}
													idx += 6;
													return X11_GREY_5 >>> 8;
												}
												case '6':
												{
													switch (str[6] | 0x20)
													{
														case '0':
														{
															idx += 7;
															return X11_GREY_60 >>> 8;
														}
														case '1':
														{
															idx += 7;
															return X11_GREY_61 >>> 8;
														}
														case '2':
														{
															idx += 7;
															return X11_GREY_62 >>> 8;
														}
														case '3':
														{
															idx += 7;
															return X11_GREY_63 >>> 8;
														}
														case '4':
														{
															idx += 7;
															return X11_GREY_64 >>> 8;
														}
														case '5':
														{
															idx += 7;
															return X11_GREY_65 >>> 8;
														}
														case '6':
														{
															idx += 7;
															return X11_GREY_66 >>> 8;
														}
														case '7':
														{
															idx += 7;
															return X11_GREY_67 >>> 8;
														}
														case '8':
														{
															idx += 7;
															return X11_GREY_68 >>> 8;
														}
														case '9':
														{
															idx += 7;
															return X11_GREY_69 >>> 8;
														}
													}
													idx += 6;
													return X11_GREY_6 >>> 8;
												}
												case '7':
												{
													switch (str[6] | 0x20)
													{
														case '0':
														{
															idx += 7;
															return X11_GREY_70 >>> 8;
														}
														case '1':
														{
															idx += 7;
															return X11_GREY_71 >>> 8;
														}
														case '2':
														{
															idx += 7;
															return X11_GREY_72 >>> 8;
														}
														case '3':
														{
															idx += 7;
															return X11_GREY_73 >>> 8;
														}
														case '4':
														{
															idx += 7;
															return X11_GREY_74 >>> 8;
														}
														case '5':
														{
															idx += 7;
															return X11_GREY_75 >>> 8;
														}
														case '6':
														{
															idx += 7;
															return X11_GREY_76 >>> 8;
														}
														case '7':
														{
															idx += 7;
															return X11_GREY_77 >>> 8;
														}
														case '8':
														{
															idx += 7;
															return X11_GREY_78 >>> 8;
														}
														case '9':
														{
															idx += 7;
															return X11_GREY_79 >>> 8;
														}
													}
													idx += 6;
													return X11_GREY_7 >>> 8;
												}
												case '8':
												{
													switch (str[6] | 0x20)
													{
														case '0':
														{
															idx += 7;
															return X11_GREY_80 >>> 8;
														}
														case '1':
														{
															idx += 7;
															return X11_GREY_81 >>> 8;
														}
														case '2':
														{
															idx += 7;
															return X11_GREY_82 >>> 8;
														}
														case '3':
														{
															idx += 7;
															return X11_GREY_83 >>> 8;
														}
														case '4':
														{
															idx += 7;
															return X11_GREY_84 >>> 8;
														}
														case '5':
														{
															idx += 7;
															return X11_GREY_85 >>> 8;
														}
														case '6':
														{
															idx += 7;
															return X11_GREY_86 >>> 8;
														}
														case '7':
														{
															idx += 7;
															return X11_GREY_87 >>> 8;
														}
														case '8':
														{
															idx += 7;
															return X11_GREY_88 >>> 8;
														}
														case '9':
														{
															idx += 7;
															return X11_GREY_89 >>> 8;
														}
													}
													idx += 6;
													return X11_GREY_8 >>> 8;
												}
												case '9':
												{
													switch (str[6] | 0x20)
													{
														case '0':
														{
															idx += 7;
															return X11_GREY_90 >>> 8;
														}
														case '1':
														{
															idx += 7;
															return X11_GREY_91 >>> 8;
														}
														case '2':
														{
															idx += 7;
															return X11_GREY_92 >>> 8;
														}
														case '3':
														{
															idx += 7;
															return X11_GREY_93 >>> 8;
														}
														case '4':
														{
															idx += 7;
															return X11_GREY_94 >>> 8;
														}
														case '5':
														{
															idx += 7;
															return X11_GREY_95 >>> 8;
														}
														case '6':
														{
															idx += 7;
															return X11_GREY_96 >>> 8;
														}
														case '7':
														{
															idx += 7;
															return X11_GREY_97 >>> 8;
														}
														case '8':
														{
															idx += 7;
															return X11_GREY_98 >>> 8;
														}
														case '9':
														{
															idx += 7;
															return X11_GREY_99 >>> 8;
														}
													}
													idx += 6;
													return X11_GREY_9 >>> 8;
												}
											}
										}
										case '0':
										{
											idx += 5;
											return X11_GREY0 >>> 8;
										}
										case '1':
										{
											switch (str[5] | 0x20)
											{
												case '0':
												{
													switch (str[6] | 0x20)
													{
														case '0':
														{
															idx += 7;
															return X11_GREY100 >>> 8;
														}
													}
													idx += 6;
													return X11_GREY10 >>> 8;
												}
												case '1':
												{
													idx += 6;
													return X11_GREY11 >>> 8;
												}
												case '2':
												{
													idx += 6;
													return X11_GREY12 >>> 8;
												}
												case '3':
												{
													idx += 6;
													return X11_GREY13 >>> 8;
												}
												case '4':
												{
													idx += 6;
													return X11_GREY14 >>> 8;
												}
												case '5':
												{
													idx += 6;
													return X11_GREY15 >>> 8;
												}
												case '6':
												{
													idx += 6;
													return X11_GREY16 >>> 8;
												}
												case '7':
												{
													idx += 6;
													return X11_GREY17 >>> 8;
												}
												case '8':
												{
													idx += 6;
													return X11_GREY18 >>> 8;
												}
												case '9':
												{
													idx += 6;
													return X11_GREY19 >>> 8;
												}
											}
											idx += 5;
											return X11_GREY1 >>> 8;
										}
										case '2':
										{
											switch (str[5] | 0x20)
											{
												case '0':
												{
													idx += 6;
													return X11_GREY20 >>> 8;
												}
												case '1':
												{
													idx += 6;
													return X11_GREY21 >>> 8;
												}
												case '2':
												{
													idx += 6;
													return X11_GREY22 >>> 8;
												}
												case '3':
												{
													idx += 6;
													return X11_GREY23 >>> 8;
												}
												case '4':
												{
													idx += 6;
													return X11_GREY24 >>> 8;
												}
												case '5':
												{
													idx += 6;
													return X11_GREY25 >>> 8;
												}
												case '6':
												{
													idx += 6;
													return X11_GREY26 >>> 8;
												}
												case '7':
												{
													idx += 6;
													return X11_GREY27 >>> 8;
												}
												case '8':
												{
													idx += 6;
													return X11_GREY28 >>> 8;
												}
												case '9':
												{
													idx += 6;
													return X11_GREY29 >>> 8;
												}
											}
											idx += 5;
											return X11_GREY2 >>> 8;
										}
										case '3':
										{
											switch (str[5] | 0x20)
											{
												case '0':
												{
													idx += 6;
													return X11_GREY30 >>> 8;
												}
												case '1':
												{
													idx += 6;
													return X11_GREY31 >>> 8;
												}
												case '2':
												{
													idx += 6;
													return X11_GREY32 >>> 8;
												}
												case '3':
												{
													idx += 6;
													return X11_GREY33 >>> 8;
												}
												case '4':
												{
													idx += 6;
													return X11_GREY34 >>> 8;
												}
												case '5':
												{
													idx += 6;
													return X11_GREY35 >>> 8;
												}
												case '6':
												{
													idx += 6;
													return X11_GREY36 >>> 8;
												}
												case '7':
												{
													idx += 6;
													return X11_GREY37 >>> 8;
												}
												case '8':
												{
													idx += 6;
													return X11_GREY38 >>> 8;
												}
												case '9':
												{
													idx += 6;
													return X11_GREY39 >>> 8;
												}
											}
											idx += 5;
											return X11_GREY3 >>> 8;
										}
										case '4':
										{
											switch (str[5] | 0x20)
											{
												case '0':
												{
													idx += 6;
													return X11_GREY40 >>> 8;
												}
												case '1':
												{
													idx += 6;
													return X11_GREY41 >>> 8;
												}
												case '2':
												{
													idx += 6;
													return X11_GREY42 >>> 8;
												}
												case '3':
												{
													idx += 6;
													return X11_GREY43 >>> 8;
												}
												case '4':
												{
													idx += 6;
													return X11_GREY44 >>> 8;
												}
												case '5':
												{
													idx += 6;
													return X11_GREY45 >>> 8;
												}
												case '6':
												{
													idx += 6;
													return X11_GREY46 >>> 8;
												}
												case '7':
												{
													idx += 6;
													return X11_GREY47 >>> 8;
												}
												case '8':
												{
													idx += 6;
													return X11_GREY48 >>> 8;
												}
												case '9':
												{
													idx += 6;
													return X11_GREY49 >>> 8;
												}
											}
											idx += 5;
											return X11_GREY4 >>> 8;
										}
										case '5':
										{
											switch (str[5] | 0x20)
											{
												case '0':
												{
													idx += 6;
													return X11_GREY50 >>> 8;
												}
												case '1':
												{
													idx += 6;
													return X11_GREY51 >>> 8;
												}
												case '2':
												{
													idx += 6;
													return X11_GREY52 >>> 8;
												}
												case '3':
												{
													idx += 6;
													return X11_GREY53 >>> 8;
												}
												case '4':
												{
													idx += 6;
													return X11_GREY54 >>> 8;
												}
												case '5':
												{
													idx += 6;
													return X11_GREY55 >>> 8;
												}
												case '6':
												{
													idx += 6;
													return X11_GREY56 >>> 8;
												}
												case '7':
												{
													idx += 6;
													return X11_GREY57 >>> 8;
												}
												case '8':
												{
													idx += 6;
													return X11_GREY58 >>> 8;
												}
												case '9':
												{
													idx += 6;
													return X11_GREY59 >>> 8;
												}
											}
											idx += 5;
											return X11_GREY5 >>> 8;
										}
										case '6':
										{
											switch (str[5] | 0x20)
											{
												case '0':
												{
													idx += 6;
													return X11_GREY60 >>> 8;
												}
												case '1':
												{
													idx += 6;
													return X11_GREY61 >>> 8;
												}
												case '2':
												{
													idx += 6;
													return X11_GREY62 >>> 8;
												}
												case '3':
												{
													idx += 6;
													return X11_GREY63 >>> 8;
												}
												case '4':
												{
													idx += 6;
													return X11_GREY64 >>> 8;
												}
												case '5':
												{
													idx += 6;
													return X11_GREY65 >>> 8;
												}
												case '6':
												{
													idx += 6;
													return X11_GREY66 >>> 8;
												}
												case '7':
												{
													idx += 6;
													return X11_GREY67 >>> 8;
												}
												case '8':
												{
													idx += 6;
													return X11_GREY68 >>> 8;
												}
												case '9':
												{
													idx += 6;
													return X11_GREY69 >>> 8;
												}
											}
											idx += 5;
											return X11_GREY6 >>> 8;
										}
										case '7':
										{
											switch (str[5] | 0x20)
											{
												case '0':
												{
													idx += 6;
													return X11_GREY70 >>> 8;
												}
												case '1':
												{
													idx += 6;
													return X11_GREY71 >>> 8;
												}
												case '2':
												{
													idx += 6;
													return X11_GREY72 >>> 8;
												}
												case '3':
												{
													idx += 6;
													return X11_GREY73 >>> 8;
												}
												case '4':
												{
													idx += 6;
													return X11_GREY74 >>> 8;
												}
												case '5':
												{
													idx += 6;
													return X11_GREY75 >>> 8;
												}
												case '6':
												{
													idx += 6;
													return X11_GREY76 >>> 8;
												}
												case '7':
												{
													idx += 6;
													return X11_GREY77 >>> 8;
												}
												case '8':
												{
													idx += 6;
													return X11_GREY78 >>> 8;
												}
												case '9':
												{
													idx += 6;
													return X11_GREY79 >>> 8;
												}
											}
											idx += 5;
											return X11_GREY7 >>> 8;
										}
										case '8':
										{
											switch (str[5] | 0x20)
											{
												case '0':
												{
													idx += 6;
													return X11_GREY80 >>> 8;
												}
												case '1':
												{
													idx += 6;
													return X11_GREY81 >>> 8;
												}
												case '2':
												{
													idx += 6;
													return X11_GREY82 >>> 8;
												}
												case '3':
												{
													idx += 6;
													return X11_GREY83 >>> 8;
												}
												case '4':
												{
													idx += 6;
													return X11_GREY84 >>> 8;
												}
												case '5':
												{
													idx += 6;
													return X11_GREY85 >>> 8;
												}
												case '6':
												{
													idx += 6;
													return X11_GREY86 >>> 8;
												}
												case '7':
												{
													idx += 6;
													return X11_GREY87 >>> 8;
												}
												case '8':
												{
													idx += 6;
													return X11_GREY88 >>> 8;
												}
												case '9':
												{
													idx += 6;
													return X11_GREY89 >>> 8;
												}
											}
											idx += 5;
											return X11_GREY8 >>> 8;
										}
										case '9':
										{
											switch (str[5] | 0x20)
											{
												case '0':
												{
													idx += 6;
													return X11_GREY90 >>> 8;
												}
												case '1':
												{
													idx += 6;
													return X11_GREY91 >>> 8;
												}
												case '2':
												{
													idx += 6;
													return X11_GREY92 >>> 8;
												}
												case '3':
												{
													idx += 6;
													return X11_GREY93 >>> 8;
												}
												case '4':
												{
													idx += 6;
													return X11_GREY94 >>> 8;
												}
												case '5':
												{
													idx += 6;
													return X11_GREY95 >>> 8;
												}
												case '6':
												{
													idx += 6;
													return X11_GREY96 >>> 8;
												}
												case '7':
												{
													idx += 6;
													return X11_GREY97 >>> 8;
												}
												case '8':
												{
													idx += 6;
													return X11_GREY98 >>> 8;
												}
												case '9':
												{
													idx += 6;
													return X11_GREY99 >>> 8;
												}
											}
											idx += 5;
											return X11_GREY9 >>> 8;
										}
									}
									idx += 4;
									return X11_GREY >>> 8;
								}
							}
						}
					}
				}
			}
		}
		case 'h':
		{
			if (str[1] != 'O')
			{
				return -1;
			}
			switch (str[2] | 0x20)
			{
				case 'n':
				{
					if (!str[3] || strcmp(str[3], !"EYDEW", true, 5))
					{
						return -1;
					}
					switch (str[8] | 0x20)
					{
						case ' ':
						{
							if (str[8])
							{
								switch (str[9] | 0x20)
								{
									case '1':
									{
										idx += 10;
										return X11_HONEYDEW_1 >>> 8;
									}
									case '2':
									{
										idx += 10;
										return X11_HONEYDEW_2 >>> 8;
									}
									case '3':
									{
										idx += 10;
										return X11_HONEYDEW_3 >>> 8;
									}
									case '4':
									{
										idx += 10;
										return X11_HONEYDEW_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[9] | 0x20)
							{
								case '1':
								{
									idx += 10;
									return X11_HONEYDEW_1 >>> 8;
								}
								case '2':
								{
									idx += 10;
									return X11_HONEYDEW_2 >>> 8;
								}
								case '3':
								{
									idx += 10;
									return X11_HONEYDEW_3 >>> 8;
								}
								case '4':
								{
									idx += 10;
									return X11_HONEYDEW_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 9;
							return X11_HONEYDEW1 >>> 8;
						}
						case '2':
						{
							idx += 9;
							return X11_HONEYDEW2 >>> 8;
						}
						case '3':
						{
							idx += 9;
							return X11_HONEYDEW3 >>> 8;
						}
						case '4':
						{
							idx += 9;
							return X11_HONEYDEW4 >>> 8;
						}
					}
					idx += 8;
					return X11_HONEYDEW >>> 8;
				}
				case 't':
				{
					switch (str[3] | 0x20)
					{
						case ' ':
						{
							if (str[3])
							{
								if (!str[4] || strcmp(str[4], !"PINK", true, 4))
								{
									return -1;
								}
								switch (str[8] | 0x20)
								{
									case ' ':
									{
										if (str[8])
										{
											switch (str[9] | 0x20)
											{
												case '1':
												{
													idx += 10;
													return X11_HOT_PINK_1 >>> 8;
												}
												case '2':
												{
													idx += 10;
													return X11_HOT_PINK_2 >>> 8;
												}
												case '3':
												{
													idx += 10;
													return X11_HOT_PINK_3 >>> 8;
												}
												case '4':
												{
													idx += 10;
													return X11_HOT_PINK_4 >>> 8;
												}
											}
										}
									}
									case '_' | 0x20:
									{
										switch (str[9] | 0x20)
										{
											case '1':
											{
												idx += 10;
												return X11_HOT_PINK_1 >>> 8;
											}
											case '2':
											{
												idx += 10;
												return X11_HOT_PINK_2 >>> 8;
											}
											case '3':
											{
												idx += 10;
												return X11_HOT_PINK_3 >>> 8;
											}
											case '4':
											{
												idx += 10;
												return X11_HOT_PINK_4 >>> 8;
											}
										}
									}
								}
								idx += 8;
								return X11_HOT_PINK >>> 8;
							}
						}
						case '_' | 0x20:
						{
							if (!str[4] || strcmp(str[4], !"PINK", true, 4))
							{
								return -1;
							}
							switch (str[8] | 0x20)
							{
								case ' ':
								{
									if (str[8])
									{
										switch (str[9] | 0x20)
										{
											case '1':
											{
												idx += 10;
												return X11_HOT_PINK_1 >>> 8;
											}
											case '2':
											{
												idx += 10;
												return X11_HOT_PINK_2 >>> 8;
											}
											case '3':
											{
												idx += 10;
												return X11_HOT_PINK_3 >>> 8;
											}
											case '4':
											{
												idx += 10;
												return X11_HOT_PINK_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[9] | 0x20)
									{
										case '1':
										{
											idx += 10;
											return X11_HOT_PINK_1 >>> 8;
										}
										case '2':
										{
											idx += 10;
											return X11_HOT_PINK_2 >>> 8;
										}
										case '3':
										{
											idx += 10;
											return X11_HOT_PINK_3 >>> 8;
										}
										case '4':
										{
											idx += 10;
											return X11_HOT_PINK_4 >>> 8;
										}
									}
								}
							}
							idx += 8;
							return X11_HOT_PINK >>> 8;
						}
						case 'p':
						{
							if (!str[4] || strcmp(str[4], !"INK", true, 3))
							{
								return -1;
							}
							switch (str[7] | 0x20)
							{
								case '1':
								{
									idx += 8;
									return X11_HOTPINK1 >>> 8;
								}
								case '2':
								{
									idx += 8;
									return X11_HOTPINK2 >>> 8;
								}
								case '3':
								{
									idx += 8;
									return X11_HOTPINK3 >>> 8;
								}
								case '4':
								{
									idx += 8;
									return X11_HOTPINK4 >>> 8;
								}
							}
							idx += 7;
							return X11_HOTPINK >>> 8;
						}
					}
				}
			}
		}
		case 'i':
		{
			switch (str[1] | 0x20)
			{
				case 'n':
				{
					if (!str[2] || strcmp(str[2], !"DIAN", true, 4))
					{
						return -1;
					}
					switch (str[6] | 0x20)
					{
						case ' ':
						{
							if (str[6])
							{
								if (!str[7] || strcmp(str[7], !"RED", true, 3))
								{
									return -1;
								}
								switch (str[10] | 0x20)
								{
									case ' ':
									{
										if (str[10])
										{
											switch (str[11] | 0x20)
											{
												case '1':
												{
													idx += 12;
													return X11_INDIAN_RED_1 >>> 8;
												}
												case '2':
												{
													idx += 12;
													return X11_INDIAN_RED_2 >>> 8;
												}
												case '3':
												{
													idx += 12;
													return X11_INDIAN_RED_3 >>> 8;
												}
												case '4':
												{
													idx += 12;
													return X11_INDIAN_RED_4 >>> 8;
												}
											}
										}
									}
									case '_' | 0x20:
									{
										switch (str[11] | 0x20)
										{
											case '1':
											{
												idx += 12;
												return X11_INDIAN_RED_1 >>> 8;
											}
											case '2':
											{
												idx += 12;
												return X11_INDIAN_RED_2 >>> 8;
											}
											case '3':
											{
												idx += 12;
												return X11_INDIAN_RED_3 >>> 8;
											}
											case '4':
											{
												idx += 12;
												return X11_INDIAN_RED_4 >>> 8;
											}
										}
									}
								}
								idx += 10;
								return X11_INDIAN_RED >>> 8;
							}
						}
						case '_' | 0x20:
						{
							if (!str[7] || strcmp(str[7], !"RED", true, 3))
							{
								return -1;
							}
							switch (str[10] | 0x20)
							{
								case ' ':
								{
									if (str[10])
									{
										switch (str[11] | 0x20)
										{
											case '1':
											{
												idx += 12;
												return X11_INDIAN_RED_1 >>> 8;
											}
											case '2':
											{
												idx += 12;
												return X11_INDIAN_RED_2 >>> 8;
											}
											case '3':
											{
												idx += 12;
												return X11_INDIAN_RED_3 >>> 8;
											}
											case '4':
											{
												idx += 12;
												return X11_INDIAN_RED_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[11] | 0x20)
									{
										case '1':
										{
											idx += 12;
											return X11_INDIAN_RED_1 >>> 8;
										}
										case '2':
										{
											idx += 12;
											return X11_INDIAN_RED_2 >>> 8;
										}
										case '3':
										{
											idx += 12;
											return X11_INDIAN_RED_3 >>> 8;
										}
										case '4':
										{
											idx += 12;
											return X11_INDIAN_RED_4 >>> 8;
										}
									}
								}
							}
							idx += 10;
							return X11_INDIAN_RED >>> 8;
						}
						case 'r':
						{
							if (!str[7] || strcmp(str[7], !"ED", true, 2))
							{
								return -1;
							}
							switch (str[9] | 0x20)
							{
								case '1':
								{
									idx += 10;
									return X11_INDIANRED1 >>> 8;
								}
								case '2':
								{
									idx += 10;
									return X11_INDIANRED2 >>> 8;
								}
								case '3':
								{
									idx += 10;
									return X11_INDIANRED3 >>> 8;
								}
								case '4':
								{
									idx += 10;
									return X11_INDIANRED4 >>> 8;
								}
							}
							idx += 9;
							return X11_INDIANRED >>> 8;
						}
					}
				}
				case 'v':
				{
					if (!str[2] || strcmp(str[2], !"ORY", true, 3))
					{
						return -1;
					}
					switch (str[5] | 0x20)
					{
						case ' ':
						{
							if (str[5])
							{
								switch (str[6] | 0x20)
								{
									case '1':
									{
										idx += 7;
										return X11_IVORY_1 >>> 8;
									}
									case '2':
									{
										idx += 7;
										return X11_IVORY_2 >>> 8;
									}
									case '3':
									{
										idx += 7;
										return X11_IVORY_3 >>> 8;
									}
									case '4':
									{
										idx += 7;
										return X11_IVORY_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[6] | 0x20)
							{
								case '1':
								{
									idx += 7;
									return X11_IVORY_1 >>> 8;
								}
								case '2':
								{
									idx += 7;
									return X11_IVORY_2 >>> 8;
								}
								case '3':
								{
									idx += 7;
									return X11_IVORY_3 >>> 8;
								}
								case '4':
								{
									idx += 7;
									return X11_IVORY_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 6;
							return X11_IVORY1 >>> 8;
						}
						case '2':
						{
							idx += 6;
							return X11_IVORY2 >>> 8;
						}
						case '3':
						{
							idx += 6;
							return X11_IVORY3 >>> 8;
						}
						case '4':
						{
							idx += 6;
							return X11_IVORY4 >>> 8;
						}
					}
					idx += 5;
					return X11_IVORY >>> 8;
				}
			}
		}
		case 'k':
		{
			if (!str[1] || strcmp(str[1], !"HAKI", true, 4))
			{
				return -1;
			}
			switch (str[5] | 0x20)
			{
				case ' ':
				{
					if (str[5])
					{
						switch (str[6] | 0x20)
						{
							case '1':
							{
								idx += 7;
								return X11_KHAKI_1 >>> 8;
							}
							case '2':
							{
								idx += 7;
								return X11_KHAKI_2 >>> 8;
							}
							case '3':
							{
								idx += 7;
								return X11_KHAKI_3 >>> 8;
							}
							case '4':
							{
								idx += 7;
								return X11_KHAKI_4 >>> 8;
							}
						}
					}
				}
				case '_' | 0x20:
				{
					switch (str[6] | 0x20)
					{
						case '1':
						{
							idx += 7;
							return X11_KHAKI_1 >>> 8;
						}
						case '2':
						{
							idx += 7;
							return X11_KHAKI_2 >>> 8;
						}
						case '3':
						{
							idx += 7;
							return X11_KHAKI_3 >>> 8;
						}
						case '4':
						{
							idx += 7;
							return X11_KHAKI_4 >>> 8;
						}
					}
				}
				case '1':
				{
					idx += 6;
					return X11_KHAKI1 >>> 8;
				}
				case '2':
				{
					idx += 6;
					return X11_KHAKI2 >>> 8;
				}
				case '3':
				{
					idx += 6;
					return X11_KHAKI3 >>> 8;
				}
				case '4':
				{
					idx += 6;
					return X11_KHAKI4 >>> 8;
				}
			}
			idx += 5;
			return X11_KHAKI >>> 8;
		}
		case 'l':
		{
			switch (str[1] | 0x20)
			{
				case 'a':
				{
					switch (str[2] | 0x20)
					{
						case 'v':
						{
							if (!str[3] || strcmp(str[3], !"ENDER", true, 5))
							{
								return -1;
							}
							switch (str[8] | 0x20)
							{
								case ' ':
								{
									if (str[8])
									{
										if (!str[9] || strcmp(str[9], !"BLUSH", true, 5))
										{
											return -1;
										}
										switch (str[14] | 0x20)
										{
											case ' ':
											{
												if (str[14])
												{
													switch (str[15] | 0x20)
													{
														case '1':
														{
															idx += 16;
															return X11_LAVENDER_BLUSH_1 >>> 8;
														}
														case '2':
														{
															idx += 16;
															return X11_LAVENDER_BLUSH_2 >>> 8;
														}
														case '3':
														{
															idx += 16;
															return X11_LAVENDER_BLUSH_3 >>> 8;
														}
														case '4':
														{
															idx += 16;
															return X11_LAVENDER_BLUSH_4 >>> 8;
														}
													}
												}
											}
											case '_' | 0x20:
											{
												switch (str[15] | 0x20)
												{
													case '1':
													{
														idx += 16;
														return X11_LAVENDER_BLUSH_1 >>> 8;
													}
													case '2':
													{
														idx += 16;
														return X11_LAVENDER_BLUSH_2 >>> 8;
													}
													case '3':
													{
														idx += 16;
														return X11_LAVENDER_BLUSH_3 >>> 8;
													}
													case '4':
													{
														idx += 16;
														return X11_LAVENDER_BLUSH_4 >>> 8;
													}
												}
											}
										}
										idx += 14;
										return X11_LAVENDER_BLUSH >>> 8;
									}
								}
								case '_' | 0x20:
								{
									if (!str[9] || strcmp(str[9], !"BLUSH", true, 5))
									{
										return -1;
									}
									switch (str[14] | 0x20)
									{
										case ' ':
										{
											if (str[14])
											{
												switch (str[15] | 0x20)
												{
													case '1':
													{
														idx += 16;
														return X11_LAVENDER_BLUSH_1 >>> 8;
													}
													case '2':
													{
														idx += 16;
														return X11_LAVENDER_BLUSH_2 >>> 8;
													}
													case '3':
													{
														idx += 16;
														return X11_LAVENDER_BLUSH_3 >>> 8;
													}
													case '4':
													{
														idx += 16;
														return X11_LAVENDER_BLUSH_4 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[15] | 0x20)
											{
												case '1':
												{
													idx += 16;
													return X11_LAVENDER_BLUSH_1 >>> 8;
												}
												case '2':
												{
													idx += 16;
													return X11_LAVENDER_BLUSH_2 >>> 8;
												}
												case '3':
												{
													idx += 16;
													return X11_LAVENDER_BLUSH_3 >>> 8;
												}
												case '4':
												{
													idx += 16;
													return X11_LAVENDER_BLUSH_4 >>> 8;
												}
											}
										}
									}
									idx += 14;
									return X11_LAVENDER_BLUSH >>> 8;
								}
								case 'b':
								{
									if (!str[9] || strcmp(str[9], !"LUSH", true, 4))
									{
										return -1;
									}
									switch (str[13] | 0x20)
									{
										case '1':
										{
											idx += 14;
											return X11_LAVENDERBLUSH1 >>> 8;
										}
										case '2':
										{
											idx += 14;
											return X11_LAVENDERBLUSH2 >>> 8;
										}
										case '3':
										{
											idx += 14;
											return X11_LAVENDERBLUSH3 >>> 8;
										}
										case '4':
										{
											idx += 14;
											return X11_LAVENDERBLUSH4 >>> 8;
										}
									}
									idx += 13;
									return X11_LAVENDERBLUSH >>> 8;
								}
							}
							idx += 8;
							return X11_LAVENDER >>> 8;
						}
						case 'w':
						{
							if (str[3] != 'N')
							{
								return -1;
							}
							switch (str[4] | 0x20)
							{
								case ' ':
								{
									if (str[4])
									{
										if (str[5] && !strcmp(str[5], !"GREEN", true, 5))
										{
											idx += 10;
											return X11_LAWN_GREEN >>> 8;
										}
									}
								}
								case '_' | 0x20:
								{
									if (str[5] && !strcmp(str[5], !"GREEN", true, 5))
									{
										idx += 10;
										return X11_LAWN_GREEN >>> 8;
									}
								}
								case 'g':
								{
									if (str[5] && !strcmp(str[5], !"REEN", true, 4))
									{
										idx += 9;
										return X11_LAWNGREEN >>> 8;
									}
								}
							}
						}
					}
				}
				case 'e':
				{
					if (!str[2] || strcmp(str[2], !"MON", true, 3))
					{
						return -1;
					}
					switch (str[5] | 0x20)
					{
						case ' ':
						{
							if (str[5])
							{
								if (!str[6] || strcmp(str[6], !"CHIFFON", true, 7))
								{
									return -1;
								}
								switch (str[13] | 0x20)
								{
									case ' ':
									{
										if (str[13])
										{
											switch (str[14] | 0x20)
											{
												case '1':
												{
													idx += 15;
													return X11_LEMON_CHIFFON_1 >>> 8;
												}
												case '2':
												{
													idx += 15;
													return X11_LEMON_CHIFFON_2 >>> 8;
												}
												case '3':
												{
													idx += 15;
													return X11_LEMON_CHIFFON_3 >>> 8;
												}
												case '4':
												{
													idx += 15;
													return X11_LEMON_CHIFFON_4 >>> 8;
												}
											}
										}
									}
									case '_' | 0x20:
									{
										switch (str[14] | 0x20)
										{
											case '1':
											{
												idx += 15;
												return X11_LEMON_CHIFFON_1 >>> 8;
											}
											case '2':
											{
												idx += 15;
												return X11_LEMON_CHIFFON_2 >>> 8;
											}
											case '3':
											{
												idx += 15;
												return X11_LEMON_CHIFFON_3 >>> 8;
											}
											case '4':
											{
												idx += 15;
												return X11_LEMON_CHIFFON_4 >>> 8;
											}
										}
									}
								}
								idx += 13;
								return X11_LEMON_CHIFFON >>> 8;
							}
						}
						case '_' | 0x20:
						{
							if (!str[6] || strcmp(str[6], !"CHIFFON", true, 7))
							{
								return -1;
							}
							switch (str[13] | 0x20)
							{
								case ' ':
								{
									if (str[13])
									{
										switch (str[14] | 0x20)
										{
											case '1':
											{
												idx += 15;
												return X11_LEMON_CHIFFON_1 >>> 8;
											}
											case '2':
											{
												idx += 15;
												return X11_LEMON_CHIFFON_2 >>> 8;
											}
											case '3':
											{
												idx += 15;
												return X11_LEMON_CHIFFON_3 >>> 8;
											}
											case '4':
											{
												idx += 15;
												return X11_LEMON_CHIFFON_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[14] | 0x20)
									{
										case '1':
										{
											idx += 15;
											return X11_LEMON_CHIFFON_1 >>> 8;
										}
										case '2':
										{
											idx += 15;
											return X11_LEMON_CHIFFON_2 >>> 8;
										}
										case '3':
										{
											idx += 15;
											return X11_LEMON_CHIFFON_3 >>> 8;
										}
										case '4':
										{
											idx += 15;
											return X11_LEMON_CHIFFON_4 >>> 8;
										}
									}
								}
							}
							idx += 13;
							return X11_LEMON_CHIFFON >>> 8;
						}
						case 'c':
						{
							if (!str[6] || strcmp(str[6], !"HIFFON", true, 6))
							{
								return -1;
							}
							switch (str[12] | 0x20)
							{
								case '1':
								{
									idx += 13;
									return X11_LEMONCHIFFON1 >>> 8;
								}
								case '2':
								{
									idx += 13;
									return X11_LEMONCHIFFON2 >>> 8;
								}
								case '3':
								{
									idx += 13;
									return X11_LEMONCHIFFON3 >>> 8;
								}
								case '4':
								{
									idx += 13;
									return X11_LEMONCHIFFON4 >>> 8;
								}
							}
							idx += 12;
							return X11_LEMONCHIFFON >>> 8;
						}
					}
				}
				case 'i':
				{
					switch (str[2] | 0x20)
					{
						case 'g':
						{
							if (!str[3] || strcmp(str[3], !"HT", true, 2))
							{
								return -1;
							}
							switch (str[5] | 0x20)
							{
								case ' ':
								{
									if (str[5])
									{
										switch (str[6] | 0x20)
										{
											case 'b':
											{
												if (!str[7] || strcmp(str[7], !"LUE", true, 3))
												{
													return -1;
												}
												switch (str[10] | 0x20)
												{
													case ' ':
													{
														if (str[10])
														{
															switch (str[11] | 0x20)
															{
																case '1':
																{
																	idx += 12;
																	return X11_LIGHT_BLUE_1 >>> 8;
																}
																case '2':
																{
																	idx += 12;
																	return X11_LIGHT_BLUE_2 >>> 8;
																}
																case '3':
																{
																	idx += 12;
																	return X11_LIGHT_BLUE_3 >>> 8;
																}
																case '4':
																{
																	idx += 12;
																	return X11_LIGHT_BLUE_4 >>> 8;
																}
															}
														}
													}
													case '_' | 0x20:
													{
														switch (str[11] | 0x20)
														{
															case '1':
															{
																idx += 12;
																return X11_LIGHT_BLUE_1 >>> 8;
															}
															case '2':
															{
																idx += 12;
																return X11_LIGHT_BLUE_2 >>> 8;
															}
															case '3':
															{
																idx += 12;
																return X11_LIGHT_BLUE_3 >>> 8;
															}
															case '4':
															{
																idx += 12;
																return X11_LIGHT_BLUE_4 >>> 8;
															}
														}
													}
												}
												idx += 10;
												return X11_LIGHT_BLUE >>> 8;
											}
											case 'c':
											{
												switch (str[7] | 0x20)
												{
													case 'o':
													{
														if (str[8] && !strcmp(str[8], !"RAL", true, 3))
														{
															idx += 11;
															return X11_LIGHT_CORAL >>> 8;
														}
													}
													case 'y':
													{
														if (!str[8] || strcmp(str[8], !"AN", true, 2))
														{
															return -1;
														}
														switch (str[10] | 0x20)
														{
															case ' ':
															{
																if (str[10])
																{
																	switch (str[11] | 0x20)
																	{
																		case '1':
																		{
																			idx += 12;
																			return X11_LIGHT_CYAN_1 >>> 8;
																		}
																		case '2':
																		{
																			idx += 12;
																			return X11_LIGHT_CYAN_2 >>> 8;
																		}
																		case '3':
																		{
																			idx += 12;
																			return X11_LIGHT_CYAN_3 >>> 8;
																		}
																		case '4':
																		{
																			idx += 12;
																			return X11_LIGHT_CYAN_4 >>> 8;
																		}
																	}
																}
															}
															case '_' | 0x20:
															{
																switch (str[11] | 0x20)
																{
																	case '1':
																	{
																		idx += 12;
																		return X11_LIGHT_CYAN_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 12;
																		return X11_LIGHT_CYAN_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 12;
																		return X11_LIGHT_CYAN_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 12;
																		return X11_LIGHT_CYAN_4 >>> 8;
																	}
																}
															}
														}
														idx += 10;
														return X11_LIGHT_CYAN >>> 8;
													}
												}
											}
											case 'g':
											{
												switch (str[7] | 0x20)
												{
													case 'o':
													{
														if (!str[8] || strcmp(str[8], !"LDENROD", true, 7))
														{
															return -1;
														}
														switch (str[15] | 0x20)
														{
															case ' ':
															{
																if (str[15])
																{
																	switch (str[16] | 0x20)
																	{
																		case '1':
																		{
																			idx += 17;
																			return X11_LIGHT_GOLDENROD_1 >>> 8;
																		}
																		case '2':
																		{
																			idx += 17;
																			return X11_LIGHT_GOLDENROD_2 >>> 8;
																		}
																		case '3':
																		{
																			idx += 17;
																			return X11_LIGHT_GOLDENROD_3 >>> 8;
																		}
																		case '4':
																		{
																			idx += 17;
																			return X11_LIGHT_GOLDENROD_4 >>> 8;
																		}
																		case 'y':
																		{
																			if (str[17] && !strcmp(str[17], !"ELLOW", true, 5))
																			{
																				idx += 22;
																				return X11_LIGHT_GOLDENROD_YELLOW >>> 8;
																			}
																		}
																	}
																}
															}
															case '_' | 0x20:
															{
																switch (str[16] | 0x20)
																{
																	case '1':
																	{
																		idx += 17;
																		return X11_LIGHT_GOLDENROD_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 17;
																		return X11_LIGHT_GOLDENROD_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 17;
																		return X11_LIGHT_GOLDENROD_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 17;
																		return X11_LIGHT_GOLDENROD_4 >>> 8;
																	}
																	case 'y':
																	{
																		if (str[17] && !strcmp(str[17], !"ELLOW", true, 5))
																		{
																			idx += 22;
																			return X11_LIGHT_GOLDENROD_YELLOW >>> 8;
																		}
																	}
																}
															}
														}
														idx += 15;
														return X11_LIGHT_GOLDENROD >>> 8;
													}
													case 'r':
													{
														switch (str[8] | 0x20)
														{
															case 'a':
															{
																if (str[9] == 'Y')
																{
																	idx += 10;
																	return X11_LIGHT_GRAY >>> 8;
																}
															}
															case 'e':
															{
																switch (str[9] | 0x20)
																{
																	case 'e':
																	{
																		if (str[10] == 'N')
																		{
																			idx += 11;
																			return X11_LIGHT_GREEN >>> 8;
																		}
																	}
																	case 'y':
																	{
																		idx += 10;
																		return X11_LIGHT_GREY >>> 8;
																	}
																}
															}
														}
													}
												}
											}
											case 'p':
											{
												if (!str[7] || strcmp(str[7], !"INK", true, 3))
												{
													return -1;
												}
												switch (str[10] | 0x20)
												{
													case ' ':
													{
														if (str[10])
														{
															switch (str[11] | 0x20)
															{
																case '1':
																{
																	idx += 12;
																	return X11_LIGHT_PINK_1 >>> 8;
																}
																case '2':
																{
																	idx += 12;
																	return X11_LIGHT_PINK_2 >>> 8;
																}
																case '3':
																{
																	idx += 12;
																	return X11_LIGHT_PINK_3 >>> 8;
																}
																case '4':
																{
																	idx += 12;
																	return X11_LIGHT_PINK_4 >>> 8;
																}
															}
														}
													}
													case '_' | 0x20:
													{
														switch (str[11] | 0x20)
														{
															case '1':
															{
																idx += 12;
																return X11_LIGHT_PINK_1 >>> 8;
															}
															case '2':
															{
																idx += 12;
																return X11_LIGHT_PINK_2 >>> 8;
															}
															case '3':
															{
																idx += 12;
																return X11_LIGHT_PINK_3 >>> 8;
															}
															case '4':
															{
																idx += 12;
																return X11_LIGHT_PINK_4 >>> 8;
															}
														}
													}
												}
												idx += 10;
												return X11_LIGHT_PINK >>> 8;
											}
											case 's':
											{
												switch (str[7] | 0x20)
												{
													case 'a':
													{
														if (!str[8] || strcmp(str[8], !"LMON", true, 4))
														{
															return -1;
														}
														switch (str[12] | 0x20)
														{
															case ' ':
															{
																if (str[12])
																{
																	switch (str[13] | 0x20)
																	{
																		case '1':
																		{
																			idx += 14;
																			return X11_LIGHT_SALMON_1 >>> 8;
																		}
																		case '2':
																		{
																			idx += 14;
																			return X11_LIGHT_SALMON_2 >>> 8;
																		}
																		case '3':
																		{
																			idx += 14;
																			return X11_LIGHT_SALMON_3 >>> 8;
																		}
																		case '4':
																		{
																			idx += 14;
																			return X11_LIGHT_SALMON_4 >>> 8;
																		}
																	}
																}
															}
															case '_' | 0x20:
															{
																switch (str[13] | 0x20)
																{
																	case '1':
																	{
																		idx += 14;
																		return X11_LIGHT_SALMON_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 14;
																		return X11_LIGHT_SALMON_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 14;
																		return X11_LIGHT_SALMON_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 14;
																		return X11_LIGHT_SALMON_4 >>> 8;
																	}
																}
															}
														}
														idx += 12;
														return X11_LIGHT_SALMON >>> 8;
													}
													case 'e':
													{
														if (str[8] && !strcmp(str[8], !"A_GREEN", true, 7))
														{
															idx += 15;
															return X11_LIGHT_SEA_GREEN >>> 8;
														}
													}
													case 'k':
													{
														if (!str[8] || strcmp(str[8], !"Y_BLUE", true, 6))
														{
															return -1;
														}
														switch (str[14] | 0x20)
														{
															case ' ':
															{
																if (str[14])
																{
																	switch (str[15] | 0x20)
																	{
																		case '1':
																		{
																			idx += 16;
																			return X11_LIGHT_SKY_BLUE_1 >>> 8;
																		}
																		case '2':
																		{
																			idx += 16;
																			return X11_LIGHT_SKY_BLUE_2 >>> 8;
																		}
																		case '3':
																		{
																			idx += 16;
																			return X11_LIGHT_SKY_BLUE_3 >>> 8;
																		}
																		case '4':
																		{
																			idx += 16;
																			return X11_LIGHT_SKY_BLUE_4 >>> 8;
																		}
																	}
																}
															}
															case '_' | 0x20:
															{
																switch (str[15] | 0x20)
																{
																	case '1':
																	{
																		idx += 16;
																		return X11_LIGHT_SKY_BLUE_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 16;
																		return X11_LIGHT_SKY_BLUE_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 16;
																		return X11_LIGHT_SKY_BLUE_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 16;
																		return X11_LIGHT_SKY_BLUE_4 >>> 8;
																	}
																}
															}
														}
														idx += 14;
														return X11_LIGHT_SKY_BLUE >>> 8;
													}
													case 'l':
													{
														if (!str[8] || strcmp(str[8], !"ATE_", true, 4))
														{
															return -1;
														}
														switch (str[12] | 0x20)
														{
															case 'b':
															{
																if (str[13] && !strcmp(str[13], !"LUE", true, 3))
																{
																	idx += 16;
																	return X11_LIGHT_SLATE_BLUE >>> 8;
																}
															}
															case 'g':
															{
																if (str[13] != 'R')
																{
																	return -1;
																}
																switch (str[14] | 0x20)
																{
																	case 'a':
																	{
																		if (str[15] == 'Y')
																		{
																			idx += 16;
																			return X11_LIGHT_SLATE_GRAY >>> 8;
																		}
																	}
																	case 'e':
																	{
																		if (str[15] == 'Y')
																		{
																			idx += 16;
																			return X11_LIGHT_SLATE_GREY >>> 8;
																		}
																	}
																}
															}
														}
													}
													case 't':
													{
														if (!str[8] || strcmp(str[8], !"EEL_BLUE", true, 8))
														{
															return -1;
														}
														switch (str[16] | 0x20)
														{
															case ' ':
															{
																if (str[16])
																{
																	switch (str[17] | 0x20)
																	{
																		case '1':
																		{
																			idx += 18;
																			return X11_LIGHT_STEEL_BLUE_1 >>> 8;
																		}
																		case '2':
																		{
																			idx += 18;
																			return X11_LIGHT_STEEL_BLUE_2 >>> 8;
																		}
																		case '3':
																		{
																			idx += 18;
																			return X11_LIGHT_STEEL_BLUE_3 >>> 8;
																		}
																		case '4':
																		{
																			idx += 18;
																			return X11_LIGHT_STEEL_BLUE_4 >>> 8;
																		}
																	}
																}
															}
															case '_' | 0x20:
															{
																switch (str[17] | 0x20)
																{
																	case '1':
																	{
																		idx += 18;
																		return X11_LIGHT_STEEL_BLUE_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 18;
																		return X11_LIGHT_STEEL_BLUE_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 18;
																		return X11_LIGHT_STEEL_BLUE_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 18;
																		return X11_LIGHT_STEEL_BLUE_4 >>> 8;
																	}
																}
															}
														}
														idx += 16;
														return X11_LIGHT_STEEL_BLUE >>> 8;
													}
												}
											}
											case 'y':
											{
												if (!str[7] || strcmp(str[7], !"ELLOW", true, 5))
												{
													return -1;
												}
												switch (str[12] | 0x20)
												{
													case ' ':
													{
														if (str[12])
														{
															switch (str[13] | 0x20)
															{
																case '1':
																{
																	idx += 14;
																	return X11_LIGHT_YELLOW_1 >>> 8;
																}
																case '2':
																{
																	idx += 14;
																	return X11_LIGHT_YELLOW_2 >>> 8;
																}
																case '3':
																{
																	idx += 14;
																	return X11_LIGHT_YELLOW_3 >>> 8;
																}
																case '4':
																{
																	idx += 14;
																	return X11_LIGHT_YELLOW_4 >>> 8;
																}
															}
														}
													}
													case '_' | 0x20:
													{
														switch (str[13] | 0x20)
														{
															case '1':
															{
																idx += 14;
																return X11_LIGHT_YELLOW_1 >>> 8;
															}
															case '2':
															{
																idx += 14;
																return X11_LIGHT_YELLOW_2 >>> 8;
															}
															case '3':
															{
																idx += 14;
																return X11_LIGHT_YELLOW_3 >>> 8;
															}
															case '4':
															{
																idx += 14;
																return X11_LIGHT_YELLOW_4 >>> 8;
															}
														}
													}
												}
												idx += 12;
												return X11_LIGHT_YELLOW >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[6] | 0x20)
									{
										case 'b':
										{
											if (!str[7] || strcmp(str[7], !"LUE", true, 3))
											{
												return -1;
											}
											switch (str[10] | 0x20)
											{
												case ' ':
												{
													if (str[10])
													{
														switch (str[11] | 0x20)
														{
															case '1':
															{
																idx += 12;
																return X11_LIGHT_BLUE_1 >>> 8;
															}
															case '2':
															{
																idx += 12;
																return X11_LIGHT_BLUE_2 >>> 8;
															}
															case '3':
															{
																idx += 12;
																return X11_LIGHT_BLUE_3 >>> 8;
															}
															case '4':
															{
																idx += 12;
																return X11_LIGHT_BLUE_4 >>> 8;
															}
														}
													}
												}
												case '_' | 0x20:
												{
													switch (str[11] | 0x20)
													{
														case '1':
														{
															idx += 12;
															return X11_LIGHT_BLUE_1 >>> 8;
														}
														case '2':
														{
															idx += 12;
															return X11_LIGHT_BLUE_2 >>> 8;
														}
														case '3':
														{
															idx += 12;
															return X11_LIGHT_BLUE_3 >>> 8;
														}
														case '4':
														{
															idx += 12;
															return X11_LIGHT_BLUE_4 >>> 8;
														}
													}
												}
											}
											idx += 10;
											return X11_LIGHT_BLUE >>> 8;
										}
										case 'c':
										{
											switch (str[7] | 0x20)
											{
												case 'o':
												{
													if (str[8] && !strcmp(str[8], !"RAL", true, 3))
													{
														idx += 11;
														return X11_LIGHT_CORAL >>> 8;
													}
												}
												case 'y':
												{
													if (!str[8] || strcmp(str[8], !"AN", true, 2))
													{
														return -1;
													}
													switch (str[10] | 0x20)
													{
														case ' ':
														{
															if (str[10])
															{
																switch (str[11] | 0x20)
																{
																	case '1':
																	{
																		idx += 12;
																		return X11_LIGHT_CYAN_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 12;
																		return X11_LIGHT_CYAN_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 12;
																		return X11_LIGHT_CYAN_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 12;
																		return X11_LIGHT_CYAN_4 >>> 8;
																	}
																}
															}
														}
														case '_' | 0x20:
														{
															switch (str[11] | 0x20)
															{
																case '1':
																{
																	idx += 12;
																	return X11_LIGHT_CYAN_1 >>> 8;
																}
																case '2':
																{
																	idx += 12;
																	return X11_LIGHT_CYAN_2 >>> 8;
																}
																case '3':
																{
																	idx += 12;
																	return X11_LIGHT_CYAN_3 >>> 8;
																}
																case '4':
																{
																	idx += 12;
																	return X11_LIGHT_CYAN_4 >>> 8;
																}
															}
														}
													}
													idx += 10;
													return X11_LIGHT_CYAN >>> 8;
												}
											}
										}
										case 'g':
										{
											switch (str[7] | 0x20)
											{
												case 'o':
												{
													if (!str[8] || strcmp(str[8], !"LDENROD", true, 7))
													{
														return -1;
													}
													switch (str[15] | 0x20)
													{
														case ' ':
														{
															if (str[15])
															{
																switch (str[16] | 0x20)
																{
																	case '1':
																	{
																		idx += 17;
																		return X11_LIGHT_GOLDENROD_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 17;
																		return X11_LIGHT_GOLDENROD_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 17;
																		return X11_LIGHT_GOLDENROD_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 17;
																		return X11_LIGHT_GOLDENROD_4 >>> 8;
																	}
																	case 'y':
																	{
																		if (str[17] && !strcmp(str[17], !"ELLOW", true, 5))
																		{
																			idx += 22;
																			return X11_LIGHT_GOLDENROD_YELLOW >>> 8;
																		}
																	}
																}
															}
														}
														case '_' | 0x20:
														{
															switch (str[16] | 0x20)
															{
																case '1':
																{
																	idx += 17;
																	return X11_LIGHT_GOLDENROD_1 >>> 8;
																}
																case '2':
																{
																	idx += 17;
																	return X11_LIGHT_GOLDENROD_2 >>> 8;
																}
																case '3':
																{
																	idx += 17;
																	return X11_LIGHT_GOLDENROD_3 >>> 8;
																}
																case '4':
																{
																	idx += 17;
																	return X11_LIGHT_GOLDENROD_4 >>> 8;
																}
																case 'y':
																{
																	if (str[17] && !strcmp(str[17], !"ELLOW", true, 5))
																	{
																		idx += 22;
																		return X11_LIGHT_GOLDENROD_YELLOW >>> 8;
																	}
																}
															}
														}
													}
													idx += 15;
													return X11_LIGHT_GOLDENROD >>> 8;
												}
												case 'r':
												{
													switch (str[8] | 0x20)
													{
														case 'a':
														{
															if (str[9] == 'Y')
															{
																idx += 10;
																return X11_LIGHT_GRAY >>> 8;
															}
														}
														case 'e':
														{
															switch (str[9] | 0x20)
															{
																case 'e':
																{
																	if (str[10] == 'N')
																	{
																		idx += 11;
																		return X11_LIGHT_GREEN >>> 8;
																	}
																}
																case 'y':
																{
																	idx += 10;
																	return X11_LIGHT_GREY >>> 8;
																}
															}
														}
													}
												}
											}
										}
										case 'p':
										{
											if (!str[7] || strcmp(str[7], !"INK", true, 3))
											{
												return -1;
											}
											switch (str[10] | 0x20)
											{
												case ' ':
												{
													if (str[10])
													{
														switch (str[11] | 0x20)
														{
															case '1':
															{
																idx += 12;
																return X11_LIGHT_PINK_1 >>> 8;
															}
															case '2':
															{
																idx += 12;
																return X11_LIGHT_PINK_2 >>> 8;
															}
															case '3':
															{
																idx += 12;
																return X11_LIGHT_PINK_3 >>> 8;
															}
															case '4':
															{
																idx += 12;
																return X11_LIGHT_PINK_4 >>> 8;
															}
														}
													}
												}
												case '_' | 0x20:
												{
													switch (str[11] | 0x20)
													{
														case '1':
														{
															idx += 12;
															return X11_LIGHT_PINK_1 >>> 8;
														}
														case '2':
														{
															idx += 12;
															return X11_LIGHT_PINK_2 >>> 8;
														}
														case '3':
														{
															idx += 12;
															return X11_LIGHT_PINK_3 >>> 8;
														}
														case '4':
														{
															idx += 12;
															return X11_LIGHT_PINK_4 >>> 8;
														}
													}
												}
											}
											idx += 10;
											return X11_LIGHT_PINK >>> 8;
										}
										case 's':
										{
											switch (str[7] | 0x20)
											{
												case 'a':
												{
													if (!str[8] || strcmp(str[8], !"LMON", true, 4))
													{
														return -1;
													}
													switch (str[12] | 0x20)
													{
														case ' ':
														{
															if (str[12])
															{
																switch (str[13] | 0x20)
																{
																	case '1':
																	{
																		idx += 14;
																		return X11_LIGHT_SALMON_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 14;
																		return X11_LIGHT_SALMON_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 14;
																		return X11_LIGHT_SALMON_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 14;
																		return X11_LIGHT_SALMON_4 >>> 8;
																	}
																}
															}
														}
														case '_' | 0x20:
														{
															switch (str[13] | 0x20)
															{
																case '1':
																{
																	idx += 14;
																	return X11_LIGHT_SALMON_1 >>> 8;
																}
																case '2':
																{
																	idx += 14;
																	return X11_LIGHT_SALMON_2 >>> 8;
																}
																case '3':
																{
																	idx += 14;
																	return X11_LIGHT_SALMON_3 >>> 8;
																}
																case '4':
																{
																	idx += 14;
																	return X11_LIGHT_SALMON_4 >>> 8;
																}
															}
														}
													}
													idx += 12;
													return X11_LIGHT_SALMON >>> 8;
												}
												case 'e':
												{
													if (str[8] && !strcmp(str[8], !"A_GREEN", true, 7))
													{
														idx += 15;
														return X11_LIGHT_SEA_GREEN >>> 8;
													}
												}
												case 'k':
												{
													if (!str[8] || strcmp(str[8], !"Y_BLUE", true, 6))
													{
														return -1;
													}
													switch (str[14] | 0x20)
													{
														case ' ':
														{
															if (str[14])
															{
																switch (str[15] | 0x20)
																{
																	case '1':
																	{
																		idx += 16;
																		return X11_LIGHT_SKY_BLUE_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 16;
																		return X11_LIGHT_SKY_BLUE_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 16;
																		return X11_LIGHT_SKY_BLUE_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 16;
																		return X11_LIGHT_SKY_BLUE_4 >>> 8;
																	}
																}
															}
														}
														case '_' | 0x20:
														{
															switch (str[15] | 0x20)
															{
																case '1':
																{
																	idx += 16;
																	return X11_LIGHT_SKY_BLUE_1 >>> 8;
																}
																case '2':
																{
																	idx += 16;
																	return X11_LIGHT_SKY_BLUE_2 >>> 8;
																}
																case '3':
																{
																	idx += 16;
																	return X11_LIGHT_SKY_BLUE_3 >>> 8;
																}
																case '4':
																{
																	idx += 16;
																	return X11_LIGHT_SKY_BLUE_4 >>> 8;
																}
															}
														}
													}
													idx += 14;
													return X11_LIGHT_SKY_BLUE >>> 8;
												}
												case 'l':
												{
													if (!str[8] || strcmp(str[8], !"ATE_", true, 4))
													{
														return -1;
													}
													switch (str[12] | 0x20)
													{
														case 'b':
														{
															if (str[13] && !strcmp(str[13], !"LUE", true, 3))
															{
																idx += 16;
																return X11_LIGHT_SLATE_BLUE >>> 8;
															}
														}
														case 'g':
														{
															if (str[13] != 'R')
															{
																return -1;
															}
															switch (str[14] | 0x20)
															{
																case 'a':
																{
																	if (str[15] == 'Y')
																	{
																		idx += 16;
																		return X11_LIGHT_SLATE_GRAY >>> 8;
																	}
																}
																case 'e':
																{
																	if (str[15] == 'Y')
																	{
																		idx += 16;
																		return X11_LIGHT_SLATE_GREY >>> 8;
																	}
																}
															}
														}
													}
												}
												case 't':
												{
													if (!str[8] || strcmp(str[8], !"EEL_BLUE", true, 8))
													{
														return -1;
													}
													switch (str[16] | 0x20)
													{
														case ' ':
														{
															if (str[16])
															{
																switch (str[17] | 0x20)
																{
																	case '1':
																	{
																		idx += 18;
																		return X11_LIGHT_STEEL_BLUE_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 18;
																		return X11_LIGHT_STEEL_BLUE_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 18;
																		return X11_LIGHT_STEEL_BLUE_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 18;
																		return X11_LIGHT_STEEL_BLUE_4 >>> 8;
																	}
																}
															}
														}
														case '_' | 0x20:
														{
															switch (str[17] | 0x20)
															{
																case '1':
																{
																	idx += 18;
																	return X11_LIGHT_STEEL_BLUE_1 >>> 8;
																}
																case '2':
																{
																	idx += 18;
																	return X11_LIGHT_STEEL_BLUE_2 >>> 8;
																}
																case '3':
																{
																	idx += 18;
																	return X11_LIGHT_STEEL_BLUE_3 >>> 8;
																}
																case '4':
																{
																	idx += 18;
																	return X11_LIGHT_STEEL_BLUE_4 >>> 8;
																}
															}
														}
													}
													idx += 16;
													return X11_LIGHT_STEEL_BLUE >>> 8;
												}
											}
										}
										case 'y':
										{
											if (!str[7] || strcmp(str[7], !"ELLOW", true, 5))
											{
												return -1;
											}
											switch (str[12] | 0x20)
											{
												case ' ':
												{
													if (str[12])
													{
														switch (str[13] | 0x20)
														{
															case '1':
															{
																idx += 14;
																return X11_LIGHT_YELLOW_1 >>> 8;
															}
															case '2':
															{
																idx += 14;
																return X11_LIGHT_YELLOW_2 >>> 8;
															}
															case '3':
															{
																idx += 14;
																return X11_LIGHT_YELLOW_3 >>> 8;
															}
															case '4':
															{
																idx += 14;
																return X11_LIGHT_YELLOW_4 >>> 8;
															}
														}
													}
												}
												case '_' | 0x20:
												{
													switch (str[13] | 0x20)
													{
														case '1':
														{
															idx += 14;
															return X11_LIGHT_YELLOW_1 >>> 8;
														}
														case '2':
														{
															idx += 14;
															return X11_LIGHT_YELLOW_2 >>> 8;
														}
														case '3':
														{
															idx += 14;
															return X11_LIGHT_YELLOW_3 >>> 8;
														}
														case '4':
														{
															idx += 14;
															return X11_LIGHT_YELLOW_4 >>> 8;
														}
													}
												}
											}
											idx += 12;
											return X11_LIGHT_YELLOW >>> 8;
										}
									}
								}
								case 'b':
								{
									if (!str[6] || strcmp(str[6], !"LUE", true, 3))
									{
										return -1;
									}
									switch (str[9] | 0x20)
									{
										case '1':
										{
											idx += 10;
											return X11_LIGHTBLUE1 >>> 8;
										}
										case '2':
										{
											idx += 10;
											return X11_LIGHTBLUE2 >>> 8;
										}
										case '3':
										{
											idx += 10;
											return X11_LIGHTBLUE3 >>> 8;
										}
										case '4':
										{
											idx += 10;
											return X11_LIGHTBLUE4 >>> 8;
										}
									}
									idx += 9;
									return X11_LIGHTBLUE >>> 8;
								}
								case 'c':
								{
									switch (str[6] | 0x20)
									{
										case 'o':
										{
											if (str[7] && !strcmp(str[7], !"RAL", true, 3))
											{
												idx += 10;
												return X11_LIGHTCORAL >>> 8;
											}
										}
										case 'y':
										{
											if (!str[7] || strcmp(str[7], !"AN", true, 2))
											{
												return -1;
											}
											switch (str[9] | 0x20)
											{
												case '1':
												{
													idx += 10;
													return X11_LIGHTCYAN1 >>> 8;
												}
												case '2':
												{
													idx += 10;
													return X11_LIGHTCYAN2 >>> 8;
												}
												case '3':
												{
													idx += 10;
													return X11_LIGHTCYAN3 >>> 8;
												}
												case '4':
												{
													idx += 10;
													return X11_LIGHTCYAN4 >>> 8;
												}
											}
											idx += 9;
											return X11_LIGHTCYAN >>> 8;
										}
									}
								}
								case 'g':
								{
									switch (str[6] | 0x20)
									{
										case 'o':
										{
											if (!str[7] || strcmp(str[7], !"LDENROD", true, 7))
											{
												return -1;
											}
											switch (str[14] | 0x20)
											{
												case '1':
												{
													idx += 15;
													return X11_LIGHTGOLDENROD1 >>> 8;
												}
												case '2':
												{
													idx += 15;
													return X11_LIGHTGOLDENROD2 >>> 8;
												}
												case '3':
												{
													idx += 15;
													return X11_LIGHTGOLDENROD3 >>> 8;
												}
												case '4':
												{
													idx += 15;
													return X11_LIGHTGOLDENROD4 >>> 8;
												}
												case 'y':
												{
													if (str[15] && !strcmp(str[15], !"ELLOW", true, 5))
													{
														idx += 20;
														return X11_LIGHTGOLDENRODYELLOW >>> 8;
													}
												}
											}
											idx += 14;
											return X11_LIGHTGOLDENROD >>> 8;
										}
										case 'r':
										{
											switch (str[7] | 0x20)
											{
												case 'a':
												{
													if (str[8] == 'Y')
													{
														idx += 9;
														return X11_LIGHTGRAY >>> 8;
													}
												}
												case 'e':
												{
													switch (str[8] | 0x20)
													{
														case 'e':
														{
															if (str[9] == 'N')
															{
																idx += 10;
																return X11_LIGHTGREEN >>> 8;
															}
														}
														case 'y':
														{
															idx += 9;
															return X11_LIGHTGREY >>> 8;
														}
													}
												}
											}
										}
									}
								}
								case 'p':
								{
									if (!str[6] || strcmp(str[6], !"INK", true, 3))
									{
										return -1;
									}
									switch (str[9] | 0x20)
									{
										case '1':
										{
											idx += 10;
											return X11_LIGHTPINK1 >>> 8;
										}
										case '2':
										{
											idx += 10;
											return X11_LIGHTPINK2 >>> 8;
										}
										case '3':
										{
											idx += 10;
											return X11_LIGHTPINK3 >>> 8;
										}
										case '4':
										{
											idx += 10;
											return X11_LIGHTPINK4 >>> 8;
										}
									}
									idx += 9;
									return X11_LIGHTPINK >>> 8;
								}
								case 's':
								{
									switch (str[6] | 0x20)
									{
										case 'a':
										{
											if (!str[7] || strcmp(str[7], !"LMON", true, 4))
											{
												return -1;
											}
											switch (str[11] | 0x20)
											{
												case '1':
												{
													idx += 12;
													return X11_LIGHTSALMON1 >>> 8;
												}
												case '2':
												{
													idx += 12;
													return X11_LIGHTSALMON2 >>> 8;
												}
												case '3':
												{
													idx += 12;
													return X11_LIGHTSALMON3 >>> 8;
												}
												case '4':
												{
													idx += 12;
													return X11_LIGHTSALMON4 >>> 8;
												}
											}
											idx += 11;
											return X11_LIGHTSALMON >>> 8;
										}
										case 'e':
										{
											if (str[7] && !strcmp(str[7], !"AGREEN", true, 6))
											{
												idx += 13;
												return X11_LIGHTSEAGREEN >>> 8;
											}
										}
										case 'k':
										{
											if (!str[7] || strcmp(str[7], !"YBLUE", true, 5))
											{
												return -1;
											}
											switch (str[12] | 0x20)
											{
												case '1':
												{
													idx += 13;
													return X11_LIGHTSKYBLUE1 >>> 8;
												}
												case '2':
												{
													idx += 13;
													return X11_LIGHTSKYBLUE2 >>> 8;
												}
												case '3':
												{
													idx += 13;
													return X11_LIGHTSKYBLUE3 >>> 8;
												}
												case '4':
												{
													idx += 13;
													return X11_LIGHTSKYBLUE4 >>> 8;
												}
											}
											idx += 12;
											return X11_LIGHTSKYBLUE >>> 8;
										}
										case 'l':
										{
											if (!str[7] || strcmp(str[7], !"ATE", true, 3))
											{
												return -1;
											}
											switch (str[10] | 0x20)
											{
												case 'b':
												{
													if (str[11] && !strcmp(str[11], !"LUE", true, 3))
													{
														idx += 14;
														return X11_LIGHTSLATEBLUE >>> 8;
													}
												}
												case 'g':
												{
													if (str[11] != 'R')
													{
														return -1;
													}
													switch (str[12] | 0x20)
													{
														case 'a':
														{
															if (str[13] == 'Y')
															{
																idx += 14;
																return X11_LIGHTSLATEGRAY >>> 8;
															}
														}
														case 'e':
														{
															if (str[13] == 'Y')
															{
																idx += 14;
																return X11_LIGHTSLATEGREY >>> 8;
															}
														}
													}
												}
											}
										}
										case 't':
										{
											if (!str[7] || strcmp(str[7], !"EELBLUE", true, 7))
											{
												return -1;
											}
											switch (str[14] | 0x20)
											{
												case '1':
												{
													idx += 15;
													return X11_LIGHTSTEELBLUE1 >>> 8;
												}
												case '2':
												{
													idx += 15;
													return X11_LIGHTSTEELBLUE2 >>> 8;
												}
												case '3':
												{
													idx += 15;
													return X11_LIGHTSTEELBLUE3 >>> 8;
												}
												case '4':
												{
													idx += 15;
													return X11_LIGHTSTEELBLUE4 >>> 8;
												}
											}
											idx += 14;
											return X11_LIGHTSTEELBLUE >>> 8;
										}
									}
								}
								case 'y':
								{
									if (!str[6] || strcmp(str[6], !"ELLOW", true, 5))
									{
										return -1;
									}
									switch (str[11] | 0x20)
									{
										case '1':
										{
											idx += 12;
											return X11_LIGHTYELLOW1 >>> 8;
										}
										case '2':
										{
											idx += 12;
											return X11_LIGHTYELLOW2 >>> 8;
										}
										case '3':
										{
											idx += 12;
											return X11_LIGHTYELLOW3 >>> 8;
										}
										case '4':
										{
											idx += 12;
											return X11_LIGHTYELLOW4 >>> 8;
										}
									}
									idx += 11;
									return X11_LIGHTYELLOW >>> 8;
								}
							}
						}
						case 'm':
						{
							if (str[3] != 'E')
							{
								return -1;
							}
							switch (str[4] | 0x20)
							{
								case ' ':
								{
									if (str[4])
									{
										if (str[5] && !strcmp(str[5], !"GREEN", true, 5))
										{
											idx += 10;
											return X11_LIME_GREEN >>> 8;
										}
									}
								}
								case '_' | 0x20:
								{
									if (str[5] && !strcmp(str[5], !"GREEN", true, 5))
									{
										idx += 10;
										return X11_LIME_GREEN >>> 8;
									}
								}
								case 'g':
								{
									if (str[5] && !strcmp(str[5], !"REEN", true, 4))
									{
										idx += 9;
										return X11_LIMEGREEN >>> 8;
									}
								}
							}
						}
						case 'n':
						{
							if (str[3] && !strcmp(str[3], !"EN", true, 2))
							{
								idx += 5;
								return X11_LINEN >>> 8;
							}
						}
					}
				}
			}
		}
		case 'm':
		{
			switch (str[1] | 0x20)
			{
				case 'a':
				{
					switch (str[2] | 0x20)
					{
						case 'g':
						{
							if (!str[3] || strcmp(str[3], !"ENTA", true, 4))
							{
								return -1;
							}
							switch (str[7] | 0x20)
							{
								case ' ':
								{
									if (str[7])
									{
										switch (str[8] | 0x20)
										{
											case '1':
											{
												idx += 9;
												return X11_MAGENTA_1 >>> 8;
											}
											case '2':
											{
												idx += 9;
												return X11_MAGENTA_2 >>> 8;
											}
											case '3':
											{
												idx += 9;
												return X11_MAGENTA_3 >>> 8;
											}
											case '4':
											{
												idx += 9;
												return X11_MAGENTA_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[8] | 0x20)
									{
										case '1':
										{
											idx += 9;
											return X11_MAGENTA_1 >>> 8;
										}
										case '2':
										{
											idx += 9;
											return X11_MAGENTA_2 >>> 8;
										}
										case '3':
										{
											idx += 9;
											return X11_MAGENTA_3 >>> 8;
										}
										case '4':
										{
											idx += 9;
											return X11_MAGENTA_4 >>> 8;
										}
									}
								}
								case '1':
								{
									idx += 8;
									return X11_MAGENTA1 >>> 8;
								}
								case '2':
								{
									idx += 8;
									return X11_MAGENTA2 >>> 8;
								}
								case '3':
								{
									idx += 8;
									return X11_MAGENTA3 >>> 8;
								}
								case '4':
								{
									idx += 8;
									return X11_MAGENTA4 >>> 8;
								}
							}
							idx += 7;
							return X11_MAGENTA >>> 8;
						}
						case 'r':
						{
							if (!str[3] || strcmp(str[3], !"OON", true, 3))
							{
								return -1;
							}
							switch (str[6] | 0x20)
							{
								case ' ':
								{
									if (str[6])
									{
										switch (str[7] | 0x20)
										{
											case '1':
											{
												idx += 8;
												return X11_MAROON_1 >>> 8;
											}
											case '2':
											{
												idx += 8;
												return X11_MAROON_2 >>> 8;
											}
											case '3':
											{
												idx += 8;
												return X11_MAROON_3 >>> 8;
											}
											case '4':
											{
												idx += 8;
												return X11_MAROON_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[7] | 0x20)
									{
										case '1':
										{
											idx += 8;
											return X11_MAROON_1 >>> 8;
										}
										case '2':
										{
											idx += 8;
											return X11_MAROON_2 >>> 8;
										}
										case '3':
										{
											idx += 8;
											return X11_MAROON_3 >>> 8;
										}
										case '4':
										{
											idx += 8;
											return X11_MAROON_4 >>> 8;
										}
									}
								}
								case '1':
								{
									idx += 7;
									return X11_MAROON1 >>> 8;
								}
								case '2':
								{
									idx += 7;
									return X11_MAROON2 >>> 8;
								}
								case '3':
								{
									idx += 7;
									return X11_MAROON3 >>> 8;
								}
								case '4':
								{
									idx += 7;
									return X11_MAROON4 >>> 8;
								}
							}
							idx += 6;
							return X11_MAROON >>> 8;
						}
					}
				}
				case 'e':
				{
					if (!str[2] || strcmp(str[2], !"DIUM", true, 4))
					{
						return -1;
					}
					switch (str[6] | 0x20)
					{
						case ' ':
						{
							if (str[6])
							{
								switch (str[7] | 0x20)
								{
									case 'a':
									{
										if (str[8] && !strcmp(str[8], !"QUAMARINE", true, 9))
										{
											idx += 17;
											return X11_MEDIUM_AQUAMARINE >>> 8;
										}
									}
									case 'b':
									{
										if (str[8] && !strcmp(str[8], !"LUE", true, 3))
										{
											idx += 11;
											return X11_MEDIUM_BLUE >>> 8;
										}
									}
									case 'o':
									{
										if (!str[8] || strcmp(str[8], !"RCHID", true, 5))
										{
											return -1;
										}
										switch (str[13] | 0x20)
										{
											case ' ':
											{
												if (str[13])
												{
													switch (str[14] | 0x20)
													{
														case '1':
														{
															idx += 15;
															return X11_MEDIUM_ORCHID_1 >>> 8;
														}
														case '2':
														{
															idx += 15;
															return X11_MEDIUM_ORCHID_2 >>> 8;
														}
														case '3':
														{
															idx += 15;
															return X11_MEDIUM_ORCHID_3 >>> 8;
														}
														case '4':
														{
															idx += 15;
															return X11_MEDIUM_ORCHID_4 >>> 8;
														}
													}
												}
											}
											case '_' | 0x20:
											{
												switch (str[14] | 0x20)
												{
													case '1':
													{
														idx += 15;
														return X11_MEDIUM_ORCHID_1 >>> 8;
													}
													case '2':
													{
														idx += 15;
														return X11_MEDIUM_ORCHID_2 >>> 8;
													}
													case '3':
													{
														idx += 15;
														return X11_MEDIUM_ORCHID_3 >>> 8;
													}
													case '4':
													{
														idx += 15;
														return X11_MEDIUM_ORCHID_4 >>> 8;
													}
												}
											}
										}
										idx += 13;
										return X11_MEDIUM_ORCHID >>> 8;
									}
									case 'p':
									{
										if (!str[8] || strcmp(str[8], !"URPLE", true, 5))
										{
											return -1;
										}
										switch (str[13] | 0x20)
										{
											case ' ':
											{
												if (str[13])
												{
													switch (str[14] | 0x20)
													{
														case '1':
														{
															idx += 15;
															return X11_MEDIUM_PURPLE_1 >>> 8;
														}
														case '2':
														{
															idx += 15;
															return X11_MEDIUM_PURPLE_2 >>> 8;
														}
														case '3':
														{
															idx += 15;
															return X11_MEDIUM_PURPLE_3 >>> 8;
														}
														case '4':
														{
															idx += 15;
															return X11_MEDIUM_PURPLE_4 >>> 8;
														}
													}
												}
											}
											case '_' | 0x20:
											{
												switch (str[14] | 0x20)
												{
													case '1':
													{
														idx += 15;
														return X11_MEDIUM_PURPLE_1 >>> 8;
													}
													case '2':
													{
														idx += 15;
														return X11_MEDIUM_PURPLE_2 >>> 8;
													}
													case '3':
													{
														idx += 15;
														return X11_MEDIUM_PURPLE_3 >>> 8;
													}
													case '4':
													{
														idx += 15;
														return X11_MEDIUM_PURPLE_4 >>> 8;
													}
												}
											}
										}
										idx += 13;
										return X11_MEDIUM_PURPLE >>> 8;
									}
									case 's':
									{
										switch (str[8] | 0x20)
										{
											case 'e':
											{
												if (str[9] && !strcmp(str[9], !"A_GREEN", true, 7))
												{
													idx += 16;
													return X11_MEDIUM_SEA_GREEN >>> 8;
												}
											}
											case 'l':
											{
												if (str[9] && !strcmp(str[9], !"ATE_BLUE", true, 8))
												{
													idx += 17;
													return X11_MEDIUM_SLATE_BLUE >>> 8;
												}
											}
											case 'p':
											{
												if (str[9] && !strcmp(str[9], !"RING_GREEN", true, 10))
												{
													idx += 19;
													return X11_MEDIUM_SPRING_GREEN >>> 8;
												}
											}
										}
									}
									case 't':
									{
										if (str[8] && !strcmp(str[8], !"URQUOISE", true, 8))
										{
											idx += 16;
											return X11_MEDIUM_TURQUOISE >>> 8;
										}
									}
									case 'v':
									{
										if (str[8] && !strcmp(str[8], !"IOLET_RED", true, 9))
										{
											idx += 17;
											return X11_MEDIUM_VIOLET_RED >>> 8;
										}
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[7] | 0x20)
							{
								case 'a':
								{
									if (str[8] && !strcmp(str[8], !"QUAMARINE", true, 9))
									{
										idx += 17;
										return X11_MEDIUM_AQUAMARINE >>> 8;
									}
								}
								case 'b':
								{
									if (str[8] && !strcmp(str[8], !"LUE", true, 3))
									{
										idx += 11;
										return X11_MEDIUM_BLUE >>> 8;
									}
								}
								case 'o':
								{
									if (!str[8] || strcmp(str[8], !"RCHID", true, 5))
									{
										return -1;
									}
									switch (str[13] | 0x20)
									{
										case ' ':
										{
											if (str[13])
											{
												switch (str[14] | 0x20)
												{
													case '1':
													{
														idx += 15;
														return X11_MEDIUM_ORCHID_1 >>> 8;
													}
													case '2':
													{
														idx += 15;
														return X11_MEDIUM_ORCHID_2 >>> 8;
													}
													case '3':
													{
														idx += 15;
														return X11_MEDIUM_ORCHID_3 >>> 8;
													}
													case '4':
													{
														idx += 15;
														return X11_MEDIUM_ORCHID_4 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[14] | 0x20)
											{
												case '1':
												{
													idx += 15;
													return X11_MEDIUM_ORCHID_1 >>> 8;
												}
												case '2':
												{
													idx += 15;
													return X11_MEDIUM_ORCHID_2 >>> 8;
												}
												case '3':
												{
													idx += 15;
													return X11_MEDIUM_ORCHID_3 >>> 8;
												}
												case '4':
												{
													idx += 15;
													return X11_MEDIUM_ORCHID_4 >>> 8;
												}
											}
										}
									}
									idx += 13;
									return X11_MEDIUM_ORCHID >>> 8;
								}
								case 'p':
								{
									if (!str[8] || strcmp(str[8], !"URPLE", true, 5))
									{
										return -1;
									}
									switch (str[13] | 0x20)
									{
										case ' ':
										{
											if (str[13])
											{
												switch (str[14] | 0x20)
												{
													case '1':
													{
														idx += 15;
														return X11_MEDIUM_PURPLE_1 >>> 8;
													}
													case '2':
													{
														idx += 15;
														return X11_MEDIUM_PURPLE_2 >>> 8;
													}
													case '3':
													{
														idx += 15;
														return X11_MEDIUM_PURPLE_3 >>> 8;
													}
													case '4':
													{
														idx += 15;
														return X11_MEDIUM_PURPLE_4 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[14] | 0x20)
											{
												case '1':
												{
													idx += 15;
													return X11_MEDIUM_PURPLE_1 >>> 8;
												}
												case '2':
												{
													idx += 15;
													return X11_MEDIUM_PURPLE_2 >>> 8;
												}
												case '3':
												{
													idx += 15;
													return X11_MEDIUM_PURPLE_3 >>> 8;
												}
												case '4':
												{
													idx += 15;
													return X11_MEDIUM_PURPLE_4 >>> 8;
												}
											}
										}
									}
									idx += 13;
									return X11_MEDIUM_PURPLE >>> 8;
								}
								case 's':
								{
									switch (str[8] | 0x20)
									{
										case 'e':
										{
											if (str[9] && !strcmp(str[9], !"A_GREEN", true, 7))
											{
												idx += 16;
												return X11_MEDIUM_SEA_GREEN >>> 8;
											}
										}
										case 'l':
										{
											if (str[9] && !strcmp(str[9], !"ATE_BLUE", true, 8))
											{
												idx += 17;
												return X11_MEDIUM_SLATE_BLUE >>> 8;
											}
										}
										case 'p':
										{
											if (str[9] && !strcmp(str[9], !"RING_GREEN", true, 10))
											{
												idx += 19;
												return X11_MEDIUM_SPRING_GREEN >>> 8;
											}
										}
									}
								}
								case 't':
								{
									if (str[8] && !strcmp(str[8], !"URQUOISE", true, 8))
									{
										idx += 16;
										return X11_MEDIUM_TURQUOISE >>> 8;
									}
								}
								case 'v':
								{
									if (str[8] && !strcmp(str[8], !"IOLET_RED", true, 9))
									{
										idx += 17;
										return X11_MEDIUM_VIOLET_RED >>> 8;
									}
								}
							}
						}
						case 'a':
						{
							if (str[7] && !strcmp(str[7], !"QUAMARINE", true, 9))
							{
								idx += 16;
								return X11_MEDIUMAQUAMARINE >>> 8;
							}
						}
						case 'b':
						{
							if (str[7] && !strcmp(str[7], !"LUE", true, 3))
							{
								idx += 10;
								return X11_MEDIUMBLUE >>> 8;
							}
						}
						case 'o':
						{
							if (!str[7] || strcmp(str[7], !"RCHID", true, 5))
							{
								return -1;
							}
							switch (str[12] | 0x20)
							{
								case '1':
								{
									idx += 13;
									return X11_MEDIUMORCHID1 >>> 8;
								}
								case '2':
								{
									idx += 13;
									return X11_MEDIUMORCHID2 >>> 8;
								}
								case '3':
								{
									idx += 13;
									return X11_MEDIUMORCHID3 >>> 8;
								}
								case '4':
								{
									idx += 13;
									return X11_MEDIUMORCHID4 >>> 8;
								}
							}
							idx += 12;
							return X11_MEDIUMORCHID >>> 8;
						}
						case 'p':
						{
							if (!str[7] || strcmp(str[7], !"URPLE", true, 5))
							{
								return -1;
							}
							switch (str[12] | 0x20)
							{
								case '1':
								{
									idx += 13;
									return X11_MEDIUMPURPLE1 >>> 8;
								}
								case '2':
								{
									idx += 13;
									return X11_MEDIUMPURPLE2 >>> 8;
								}
								case '3':
								{
									idx += 13;
									return X11_MEDIUMPURPLE3 >>> 8;
								}
								case '4':
								{
									idx += 13;
									return X11_MEDIUMPURPLE4 >>> 8;
								}
							}
							idx += 12;
							return X11_MEDIUMPURPLE >>> 8;
						}
						case 's':
						{
							switch (str[7] | 0x20)
							{
								case 'e':
								{
									if (str[8] && !strcmp(str[8], !"AGREEN", true, 6))
									{
										idx += 14;
										return X11_MEDIUMSEAGREEN >>> 8;
									}
								}
								case 'l':
								{
									if (str[8] && !strcmp(str[8], !"ATEBLUE", true, 7))
									{
										idx += 15;
										return X11_MEDIUMSLATEBLUE >>> 8;
									}
								}
								case 'p':
								{
									if (str[8] && !strcmp(str[8], !"RINGGREEN", true, 9))
									{
										idx += 17;
										return X11_MEDIUMSPRINGGREEN >>> 8;
									}
								}
							}
						}
						case 't':
						{
							if (str[7] && !strcmp(str[7], !"URQUOISE", true, 8))
							{
								idx += 15;
								return X11_MEDIUMTURQUOISE >>> 8;
							}
						}
						case 'v':
						{
							if (str[7] && !strcmp(str[7], !"IOLETRED", true, 8))
							{
								idx += 15;
								return X11_MEDIUMVIOLETRED >>> 8;
							}
						}
					}
				}
				case 'i':
				{
					switch (str[2] | 0x20)
					{
						case 'd':
						{
							if (!str[3] || strcmp(str[3], !"NIGHT", true, 5))
							{
								return -1;
							}
							switch (str[8] | 0x20)
							{
								case ' ':
								{
									if (str[8])
									{
										if (str[9] && !strcmp(str[9], !"BLUE", true, 4))
										{
											idx += 13;
											return X11_MIDNIGHT_BLUE >>> 8;
										}
									}
								}
								case '_' | 0x20:
								{
									if (str[9] && !strcmp(str[9], !"BLUE", true, 4))
									{
										idx += 13;
										return X11_MIDNIGHT_BLUE >>> 8;
									}
								}
								case 'b':
								{
									if (str[9] && !strcmp(str[9], !"LUE", true, 3))
									{
										idx += 12;
										return X11_MIDNIGHTBLUE >>> 8;
									}
								}
							}
						}
						case 'n':
						{
							if (str[3] != 'T')
							{
								return -1;
							}
							switch (str[4] | 0x20)
							{
								case ' ':
								{
									if (str[4])
									{
										if (str[5] && !strcmp(str[5], !"CREAM", true, 5))
										{
											idx += 10;
											return X11_MINT_CREAM >>> 8;
										}
									}
								}
								case '_' | 0x20:
								{
									if (str[5] && !strcmp(str[5], !"CREAM", true, 5))
									{
										idx += 10;
										return X11_MINT_CREAM >>> 8;
									}
								}
								case 'c':
								{
									if (str[5] && !strcmp(str[5], !"REAM", true, 4))
									{
										idx += 9;
										return X11_MINTCREAM >>> 8;
									}
								}
							}
						}
						case 's':
						{
							if (!str[3] || strcmp(str[3], !"TY", true, 2))
							{
								return -1;
							}
							switch (str[5] | 0x20)
							{
								case ' ':
								{
									if (str[5])
									{
										if (!str[6] || strcmp(str[6], !"ROSE", true, 4))
										{
											return -1;
										}
										switch (str[10] | 0x20)
										{
											case ' ':
											{
												if (str[10])
												{
													switch (str[11] | 0x20)
													{
														case '1':
														{
															idx += 12;
															return X11_MISTY_ROSE_1 >>> 8;
														}
														case '2':
														{
															idx += 12;
															return X11_MISTY_ROSE_2 >>> 8;
														}
														case '3':
														{
															idx += 12;
															return X11_MISTY_ROSE_3 >>> 8;
														}
														case '4':
														{
															idx += 12;
															return X11_MISTY_ROSE_4 >>> 8;
														}
													}
												}
											}
											case '_' | 0x20:
											{
												switch (str[11] | 0x20)
												{
													case '1':
													{
														idx += 12;
														return X11_MISTY_ROSE_1 >>> 8;
													}
													case '2':
													{
														idx += 12;
														return X11_MISTY_ROSE_2 >>> 8;
													}
													case '3':
													{
														idx += 12;
														return X11_MISTY_ROSE_3 >>> 8;
													}
													case '4':
													{
														idx += 12;
														return X11_MISTY_ROSE_4 >>> 8;
													}
												}
											}
										}
										idx += 10;
										return X11_MISTY_ROSE >>> 8;
									}
								}
								case '_' | 0x20:
								{
									if (!str[6] || strcmp(str[6], !"ROSE", true, 4))
									{
										return -1;
									}
									switch (str[10] | 0x20)
									{
										case ' ':
										{
											if (str[10])
											{
												switch (str[11] | 0x20)
												{
													case '1':
													{
														idx += 12;
														return X11_MISTY_ROSE_1 >>> 8;
													}
													case '2':
													{
														idx += 12;
														return X11_MISTY_ROSE_2 >>> 8;
													}
													case '3':
													{
														idx += 12;
														return X11_MISTY_ROSE_3 >>> 8;
													}
													case '4':
													{
														idx += 12;
														return X11_MISTY_ROSE_4 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[11] | 0x20)
											{
												case '1':
												{
													idx += 12;
													return X11_MISTY_ROSE_1 >>> 8;
												}
												case '2':
												{
													idx += 12;
													return X11_MISTY_ROSE_2 >>> 8;
												}
												case '3':
												{
													idx += 12;
													return X11_MISTY_ROSE_3 >>> 8;
												}
												case '4':
												{
													idx += 12;
													return X11_MISTY_ROSE_4 >>> 8;
												}
											}
										}
									}
									idx += 10;
									return X11_MISTY_ROSE >>> 8;
								}
								case 'r':
								{
									if (!str[6] || strcmp(str[6], !"OSE", true, 3))
									{
										return -1;
									}
									switch (str[9] | 0x20)
									{
										case '1':
										{
											idx += 10;
											return X11_MISTYROSE1 >>> 8;
										}
										case '2':
										{
											idx += 10;
											return X11_MISTYROSE2 >>> 8;
										}
										case '3':
										{
											idx += 10;
											return X11_MISTYROSE3 >>> 8;
										}
										case '4':
										{
											idx += 10;
											return X11_MISTYROSE4 >>> 8;
										}
									}
									idx += 9;
									return X11_MISTYROSE >>> 8;
								}
							}
						}
					}
				}
				case 'o':
				{
					if (str[2] && !strcmp(str[2], !"CCASIN", true, 6))
					{
						idx += 8;
						return X11_MOCCASIN >>> 8;
					}
				}
			}
		}
		case 'n':
		{
			if (!str[1] || strcmp(str[1], !"AV", true, 2))
			{
				return -1;
			}
			switch (str[3] | 0x20)
			{
				case 'a':
				{
					if (!str[4] || strcmp(str[4], !"JO", true, 2))
					{
						return -1;
					}
					switch (str[6] | 0x20)
					{
						case ' ':
						{
							if (str[6])
							{
								if (!str[7] || strcmp(str[7], !"WHITE", true, 5))
								{
									return -1;
								}
								switch (str[12] | 0x20)
								{
									case ' ':
									{
										if (str[12])
										{
											switch (str[13] | 0x20)
											{
												case '1':
												{
													idx += 14;
													return X11_NAVAJO_WHITE_1 >>> 8;
												}
												case '2':
												{
													idx += 14;
													return X11_NAVAJO_WHITE_2 >>> 8;
												}
												case '3':
												{
													idx += 14;
													return X11_NAVAJO_WHITE_3 >>> 8;
												}
												case '4':
												{
													idx += 14;
													return X11_NAVAJO_WHITE_4 >>> 8;
												}
											}
										}
									}
									case '_' | 0x20:
									{
										switch (str[13] | 0x20)
										{
											case '1':
											{
												idx += 14;
												return X11_NAVAJO_WHITE_1 >>> 8;
											}
											case '2':
											{
												idx += 14;
												return X11_NAVAJO_WHITE_2 >>> 8;
											}
											case '3':
											{
												idx += 14;
												return X11_NAVAJO_WHITE_3 >>> 8;
											}
											case '4':
											{
												idx += 14;
												return X11_NAVAJO_WHITE_4 >>> 8;
											}
										}
									}
								}
								idx += 12;
								return X11_NAVAJO_WHITE >>> 8;
							}
						}
						case '_' | 0x20:
						{
							if (!str[7] || strcmp(str[7], !"WHITE", true, 5))
							{
								return -1;
							}
							switch (str[12] | 0x20)
							{
								case ' ':
								{
									if (str[12])
									{
										switch (str[13] | 0x20)
										{
											case '1':
											{
												idx += 14;
												return X11_NAVAJO_WHITE_1 >>> 8;
											}
											case '2':
											{
												idx += 14;
												return X11_NAVAJO_WHITE_2 >>> 8;
											}
											case '3':
											{
												idx += 14;
												return X11_NAVAJO_WHITE_3 >>> 8;
											}
											case '4':
											{
												idx += 14;
												return X11_NAVAJO_WHITE_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[13] | 0x20)
									{
										case '1':
										{
											idx += 14;
											return X11_NAVAJO_WHITE_1 >>> 8;
										}
										case '2':
										{
											idx += 14;
											return X11_NAVAJO_WHITE_2 >>> 8;
										}
										case '3':
										{
											idx += 14;
											return X11_NAVAJO_WHITE_3 >>> 8;
										}
										case '4':
										{
											idx += 14;
											return X11_NAVAJO_WHITE_4 >>> 8;
										}
									}
								}
							}
							idx += 12;
							return X11_NAVAJO_WHITE >>> 8;
						}
						case 'w':
						{
							if (!str[7] || strcmp(str[7], !"HITE", true, 4))
							{
								return -1;
							}
							switch (str[11] | 0x20)
							{
								case '1':
								{
									idx += 12;
									return X11_NAVAJOWHITE1 >>> 8;
								}
								case '2':
								{
									idx += 12;
									return X11_NAVAJOWHITE2 >>> 8;
								}
								case '3':
								{
									idx += 12;
									return X11_NAVAJOWHITE3 >>> 8;
								}
								case '4':
								{
									idx += 12;
									return X11_NAVAJOWHITE4 >>> 8;
								}
							}
							idx += 11;
							return X11_NAVAJOWHITE >>> 8;
						}
					}
				}
				case 'y':
				{
					switch (str[4] | 0x20)
					{
						case ' ':
						{
							if (str[4])
							{
								if (str[5] && !strcmp(str[5], !"BLUE", true, 4))
								{
									idx += 9;
									return X11_NAVY_BLUE >>> 8;
								}
							}
						}
						case '_' | 0x20:
						{
							if (str[5] && !strcmp(str[5], !"BLUE", true, 4))
							{
								idx += 9;
								return X11_NAVY_BLUE >>> 8;
							}
						}
						case 'b':
						{
							if (str[5] && !strcmp(str[5], !"LUE", true, 3))
							{
								idx += 8;
								return X11_NAVYBLUE >>> 8;
							}
						}
					}
					idx += 4;
					return X11_NAVY >>> 8;
				}
			}
		}
		case 'o':
		{
			switch (str[1] | 0x20)
			{
				case 'l':
				{
					switch (str[2] | 0x20)
					{
						case 'd':
						{
							switch (str[3] | 0x20)
							{
								case ' ':
								{
									if (str[3])
									{
										if (str[4] && !strcmp(str[4], !"LACE", true, 4))
										{
											idx += 8;
											return X11_OLD_LACE >>> 8;
										}
									}
								}
								case '_' | 0x20:
								{
									if (str[4] && !strcmp(str[4], !"LACE", true, 4))
									{
										idx += 8;
										return X11_OLD_LACE >>> 8;
									}
								}
								case 'l':
								{
									if (str[4] && !strcmp(str[4], !"ACE", true, 3))
									{
										idx += 7;
										return X11_OLDLACE >>> 8;
									}
								}
							}
						}
						case 'i':
						{
							if (!str[3] || strcmp(str[3], !"VE", true, 2))
							{
								return -1;
							}
							switch (str[5] | 0x20)
							{
								case ' ':
								{
									if (str[5])
									{
										if (!str[6] || strcmp(str[6], !"DRAB", true, 4))
										{
											return -1;
										}
										switch (str[10] | 0x20)
										{
											case ' ':
											{
												if (str[10])
												{
													switch (str[11] | 0x20)
													{
														case '1':
														{
															idx += 12;
															return X11_OLIVE_DRAB_1 >>> 8;
														}
														case '2':
														{
															idx += 12;
															return X11_OLIVE_DRAB_2 >>> 8;
														}
														case '3':
														{
															idx += 12;
															return X11_OLIVE_DRAB_3 >>> 8;
														}
														case '4':
														{
															idx += 12;
															return X11_OLIVE_DRAB_4 >>> 8;
														}
													}
												}
											}
											case '_' | 0x20:
											{
												switch (str[11] | 0x20)
												{
													case '1':
													{
														idx += 12;
														return X11_OLIVE_DRAB_1 >>> 8;
													}
													case '2':
													{
														idx += 12;
														return X11_OLIVE_DRAB_2 >>> 8;
													}
													case '3':
													{
														idx += 12;
														return X11_OLIVE_DRAB_3 >>> 8;
													}
													case '4':
													{
														idx += 12;
														return X11_OLIVE_DRAB_4 >>> 8;
													}
												}
											}
										}
										idx += 10;
										return X11_OLIVE_DRAB >>> 8;
									}
								}
								case '_' | 0x20:
								{
									if (!str[6] || strcmp(str[6], !"DRAB", true, 4))
									{
										return -1;
									}
									switch (str[10] | 0x20)
									{
										case ' ':
										{
											if (str[10])
											{
												switch (str[11] | 0x20)
												{
													case '1':
													{
														idx += 12;
														return X11_OLIVE_DRAB_1 >>> 8;
													}
													case '2':
													{
														idx += 12;
														return X11_OLIVE_DRAB_2 >>> 8;
													}
													case '3':
													{
														idx += 12;
														return X11_OLIVE_DRAB_3 >>> 8;
													}
													case '4':
													{
														idx += 12;
														return X11_OLIVE_DRAB_4 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[11] | 0x20)
											{
												case '1':
												{
													idx += 12;
													return X11_OLIVE_DRAB_1 >>> 8;
												}
												case '2':
												{
													idx += 12;
													return X11_OLIVE_DRAB_2 >>> 8;
												}
												case '3':
												{
													idx += 12;
													return X11_OLIVE_DRAB_3 >>> 8;
												}
												case '4':
												{
													idx += 12;
													return X11_OLIVE_DRAB_4 >>> 8;
												}
											}
										}
									}
									idx += 10;
									return X11_OLIVE_DRAB >>> 8;
								}
								case 'd':
								{
									if (!str[6] || strcmp(str[6], !"RAB", true, 3))
									{
										return -1;
									}
									switch (str[9] | 0x20)
									{
										case '1':
										{
											idx += 10;
											return X11_OLIVEDRAB1 >>> 8;
										}
										case '2':
										{
											idx += 10;
											return X11_OLIVEDRAB2 >>> 8;
										}
										case '3':
										{
											idx += 10;
											return X11_OLIVEDRAB3 >>> 8;
										}
										case '4':
										{
											idx += 10;
											return X11_OLIVEDRAB4 >>> 8;
										}
									}
									idx += 9;
									return X11_OLIVEDRAB >>> 8;
								}
							}
						}
					}
				}
				case 'r':
				{
					switch (str[2] | 0x20)
					{
						case 'a':
						{
							if (!str[3] || strcmp(str[3], !"NGE", true, 3))
							{
								return -1;
							}
							switch (str[6] | 0x20)
							{
								case ' ':
								{
									if (str[6])
									{
										switch (str[7] | 0x20)
										{
											case '1':
											{
												idx += 8;
												return X11_ORANGE_1 >>> 8;
											}
											case '2':
											{
												idx += 8;
												return X11_ORANGE_2 >>> 8;
											}
											case '3':
											{
												idx += 8;
												return X11_ORANGE_3 >>> 8;
											}
											case '4':
											{
												idx += 8;
												return X11_ORANGE_4 >>> 8;
											}
											case 'r':
											{
												if (!str[8] || strcmp(str[8], !"ED", true, 2))
												{
													return -1;
												}
												switch (str[10] | 0x20)
												{
													case ' ':
													{
														if (str[10])
														{
															switch (str[11] | 0x20)
															{
																case '1':
																{
																	idx += 12;
																	return X11_ORANGE_RED_1 >>> 8;
																}
																case '2':
																{
																	idx += 12;
																	return X11_ORANGE_RED_2 >>> 8;
																}
																case '3':
																{
																	idx += 12;
																	return X11_ORANGE_RED_3 >>> 8;
																}
																case '4':
																{
																	idx += 12;
																	return X11_ORANGE_RED_4 >>> 8;
																}
															}
														}
													}
													case '_' | 0x20:
													{
														switch (str[11] | 0x20)
														{
															case '1':
															{
																idx += 12;
																return X11_ORANGE_RED_1 >>> 8;
															}
															case '2':
															{
																idx += 12;
																return X11_ORANGE_RED_2 >>> 8;
															}
															case '3':
															{
																idx += 12;
																return X11_ORANGE_RED_3 >>> 8;
															}
															case '4':
															{
																idx += 12;
																return X11_ORANGE_RED_4 >>> 8;
															}
														}
													}
												}
												idx += 10;
												return X11_ORANGE_RED >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[7] | 0x20)
									{
										case '1':
										{
											idx += 8;
											return X11_ORANGE_1 >>> 8;
										}
										case '2':
										{
											idx += 8;
											return X11_ORANGE_2 >>> 8;
										}
										case '3':
										{
											idx += 8;
											return X11_ORANGE_3 >>> 8;
										}
										case '4':
										{
											idx += 8;
											return X11_ORANGE_4 >>> 8;
										}
										case 'r':
										{
											if (!str[8] || strcmp(str[8], !"ED", true, 2))
											{
												return -1;
											}
											switch (str[10] | 0x20)
											{
												case ' ':
												{
													if (str[10])
													{
														switch (str[11] | 0x20)
														{
															case '1':
															{
																idx += 12;
																return X11_ORANGE_RED_1 >>> 8;
															}
															case '2':
															{
																idx += 12;
																return X11_ORANGE_RED_2 >>> 8;
															}
															case '3':
															{
																idx += 12;
																return X11_ORANGE_RED_3 >>> 8;
															}
															case '4':
															{
																idx += 12;
																return X11_ORANGE_RED_4 >>> 8;
															}
														}
													}
												}
												case '_' | 0x20:
												{
													switch (str[11] | 0x20)
													{
														case '1':
														{
															idx += 12;
															return X11_ORANGE_RED_1 >>> 8;
														}
														case '2':
														{
															idx += 12;
															return X11_ORANGE_RED_2 >>> 8;
														}
														case '3':
														{
															idx += 12;
															return X11_ORANGE_RED_3 >>> 8;
														}
														case '4':
														{
															idx += 12;
															return X11_ORANGE_RED_4 >>> 8;
														}
													}
												}
											}
											idx += 10;
											return X11_ORANGE_RED >>> 8;
										}
									}
								}
								case '1':
								{
									idx += 7;
									return X11_ORANGE1 >>> 8;
								}
								case '2':
								{
									idx += 7;
									return X11_ORANGE2 >>> 8;
								}
								case '3':
								{
									idx += 7;
									return X11_ORANGE3 >>> 8;
								}
								case '4':
								{
									idx += 7;
									return X11_ORANGE4 >>> 8;
								}
								case 'r':
								{
									if (!str[7] || strcmp(str[7], !"ED", true, 2))
									{
										return -1;
									}
									switch (str[9] | 0x20)
									{
										case '1':
										{
											idx += 10;
											return X11_ORANGERED1 >>> 8;
										}
										case '2':
										{
											idx += 10;
											return X11_ORANGERED2 >>> 8;
										}
										case '3':
										{
											idx += 10;
											return X11_ORANGERED3 >>> 8;
										}
										case '4':
										{
											idx += 10;
											return X11_ORANGERED4 >>> 8;
										}
									}
									idx += 9;
									return X11_ORANGERED >>> 8;
								}
							}
							idx += 6;
							return X11_ORANGE >>> 8;
						}
						case 'c':
						{
							if (!str[3] || strcmp(str[3], !"HID", true, 3))
							{
								return -1;
							}
							switch (str[6] | 0x20)
							{
								case ' ':
								{
									if (str[6])
									{
										switch (str[7] | 0x20)
										{
											case '1':
											{
												idx += 8;
												return X11_ORCHID_1 >>> 8;
											}
											case '2':
											{
												idx += 8;
												return X11_ORCHID_2 >>> 8;
											}
											case '3':
											{
												idx += 8;
												return X11_ORCHID_3 >>> 8;
											}
											case '4':
											{
												idx += 8;
												return X11_ORCHID_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[7] | 0x20)
									{
										case '1':
										{
											idx += 8;
											return X11_ORCHID_1 >>> 8;
										}
										case '2':
										{
											idx += 8;
											return X11_ORCHID_2 >>> 8;
										}
										case '3':
										{
											idx += 8;
											return X11_ORCHID_3 >>> 8;
										}
										case '4':
										{
											idx += 8;
											return X11_ORCHID_4 >>> 8;
										}
									}
								}
								case '1':
								{
									idx += 7;
									return X11_ORCHID1 >>> 8;
								}
								case '2':
								{
									idx += 7;
									return X11_ORCHID2 >>> 8;
								}
								case '3':
								{
									idx += 7;
									return X11_ORCHID3 >>> 8;
								}
								case '4':
								{
									idx += 7;
									return X11_ORCHID4 >>> 8;
								}
							}
							idx += 6;
							return X11_ORCHID >>> 8;
						}
					}
				}
			}
		}
		case 'p':
		{
			switch (str[1] | 0x20)
			{
				case 'a':
				{
					switch (str[2] | 0x20)
					{
						case 'l':
						{
							if (str[3] != 'E')
							{
								return -1;
							}
							switch (str[4] | 0x20)
							{
								case ' ':
								{
									if (str[4])
									{
										switch (str[5] | 0x20)
										{
											case 'g':
											{
												switch (str[6] | 0x20)
												{
													case 'o':
													{
														if (str[7] && !strcmp(str[7], !"LDENROD", true, 7))
														{
															idx += 14;
															return X11_PALE_GOLDENROD >>> 8;
														}
													}
													case 'r':
													{
														if (!str[7] || strcmp(str[7], !"EEN", true, 3))
														{
															return -1;
														}
														switch (str[10] | 0x20)
														{
															case ' ':
															{
																if (str[10])
																{
																	switch (str[11] | 0x20)
																	{
																		case '1':
																		{
																			idx += 12;
																			return X11_PALE_GREEN_1 >>> 8;
																		}
																		case '2':
																		{
																			idx += 12;
																			return X11_PALE_GREEN_2 >>> 8;
																		}
																		case '3':
																		{
																			idx += 12;
																			return X11_PALE_GREEN_3 >>> 8;
																		}
																		case '4':
																		{
																			idx += 12;
																			return X11_PALE_GREEN_4 >>> 8;
																		}
																	}
																}
															}
															case '_' | 0x20:
															{
																switch (str[11] | 0x20)
																{
																	case '1':
																	{
																		idx += 12;
																		return X11_PALE_GREEN_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 12;
																		return X11_PALE_GREEN_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 12;
																		return X11_PALE_GREEN_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 12;
																		return X11_PALE_GREEN_4 >>> 8;
																	}
																}
															}
														}
														idx += 10;
														return X11_PALE_GREEN >>> 8;
													}
												}
											}
											case 't':
											{
												if (!str[6] || strcmp(str[6], !"URQUOISE", true, 8))
												{
													return -1;
												}
												switch (str[14] | 0x20)
												{
													case ' ':
													{
														if (str[14])
														{
															switch (str[15] | 0x20)
															{
																case '1':
																{
																	idx += 16;
																	return X11_PALE_TURQUOISE_1 >>> 8;
																}
																case '2':
																{
																	idx += 16;
																	return X11_PALE_TURQUOISE_2 >>> 8;
																}
																case '3':
																{
																	idx += 16;
																	return X11_PALE_TURQUOISE_3 >>> 8;
																}
																case '4':
																{
																	idx += 16;
																	return X11_PALE_TURQUOISE_4 >>> 8;
																}
															}
														}
													}
													case '_' | 0x20:
													{
														switch (str[15] | 0x20)
														{
															case '1':
															{
																idx += 16;
																return X11_PALE_TURQUOISE_1 >>> 8;
															}
															case '2':
															{
																idx += 16;
																return X11_PALE_TURQUOISE_2 >>> 8;
															}
															case '3':
															{
																idx += 16;
																return X11_PALE_TURQUOISE_3 >>> 8;
															}
															case '4':
															{
																idx += 16;
																return X11_PALE_TURQUOISE_4 >>> 8;
															}
														}
													}
												}
												idx += 14;
												return X11_PALE_TURQUOISE >>> 8;
											}
											case 'v':
											{
												if (!str[6] || strcmp(str[6], !"IOLET_RED", true, 9))
												{
													return -1;
												}
												switch (str[15] | 0x20)
												{
													case ' ':
													{
														if (str[15])
														{
															switch (str[16] | 0x20)
															{
																case '1':
																{
																	idx += 17;
																	return X11_PALE_VIOLET_RED_1 >>> 8;
																}
																case '2':
																{
																	idx += 17;
																	return X11_PALE_VIOLET_RED_2 >>> 8;
																}
																case '3':
																{
																	idx += 17;
																	return X11_PALE_VIOLET_RED_3 >>> 8;
																}
																case '4':
																{
																	idx += 17;
																	return X11_PALE_VIOLET_RED_4 >>> 8;
																}
															}
														}
													}
													case '_' | 0x20:
													{
														switch (str[16] | 0x20)
														{
															case '1':
															{
																idx += 17;
																return X11_PALE_VIOLET_RED_1 >>> 8;
															}
															case '2':
															{
																idx += 17;
																return X11_PALE_VIOLET_RED_2 >>> 8;
															}
															case '3':
															{
																idx += 17;
																return X11_PALE_VIOLET_RED_3 >>> 8;
															}
															case '4':
															{
																idx += 17;
																return X11_PALE_VIOLET_RED_4 >>> 8;
															}
														}
													}
												}
												idx += 15;
												return X11_PALE_VIOLET_RED >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[5] | 0x20)
									{
										case 'g':
										{
											switch (str[6] | 0x20)
											{
												case 'o':
												{
													if (str[7] && !strcmp(str[7], !"LDENROD", true, 7))
													{
														idx += 14;
														return X11_PALE_GOLDENROD >>> 8;
													}
												}
												case 'r':
												{
													if (!str[7] || strcmp(str[7], !"EEN", true, 3))
													{
														return -1;
													}
													switch (str[10] | 0x20)
													{
														case ' ':
														{
															if (str[10])
															{
																switch (str[11] | 0x20)
																{
																	case '1':
																	{
																		idx += 12;
																		return X11_PALE_GREEN_1 >>> 8;
																	}
																	case '2':
																	{
																		idx += 12;
																		return X11_PALE_GREEN_2 >>> 8;
																	}
																	case '3':
																	{
																		idx += 12;
																		return X11_PALE_GREEN_3 >>> 8;
																	}
																	case '4':
																	{
																		idx += 12;
																		return X11_PALE_GREEN_4 >>> 8;
																	}
																}
															}
														}
														case '_' | 0x20:
														{
															switch (str[11] | 0x20)
															{
																case '1':
																{
																	idx += 12;
																	return X11_PALE_GREEN_1 >>> 8;
																}
																case '2':
																{
																	idx += 12;
																	return X11_PALE_GREEN_2 >>> 8;
																}
																case '3':
																{
																	idx += 12;
																	return X11_PALE_GREEN_3 >>> 8;
																}
																case '4':
																{
																	idx += 12;
																	return X11_PALE_GREEN_4 >>> 8;
																}
															}
														}
													}
													idx += 10;
													return X11_PALE_GREEN >>> 8;
												}
											}
										}
										case 't':
										{
											if (!str[6] || strcmp(str[6], !"URQUOISE", true, 8))
											{
												return -1;
											}
											switch (str[14] | 0x20)
											{
												case ' ':
												{
													if (str[14])
													{
														switch (str[15] | 0x20)
														{
															case '1':
															{
																idx += 16;
																return X11_PALE_TURQUOISE_1 >>> 8;
															}
															case '2':
															{
																idx += 16;
																return X11_PALE_TURQUOISE_2 >>> 8;
															}
															case '3':
															{
																idx += 16;
																return X11_PALE_TURQUOISE_3 >>> 8;
															}
															case '4':
															{
																idx += 16;
																return X11_PALE_TURQUOISE_4 >>> 8;
															}
														}
													}
												}
												case '_' | 0x20:
												{
													switch (str[15] | 0x20)
													{
														case '1':
														{
															idx += 16;
															return X11_PALE_TURQUOISE_1 >>> 8;
														}
														case '2':
														{
															idx += 16;
															return X11_PALE_TURQUOISE_2 >>> 8;
														}
														case '3':
														{
															idx += 16;
															return X11_PALE_TURQUOISE_3 >>> 8;
														}
														case '4':
														{
															idx += 16;
															return X11_PALE_TURQUOISE_4 >>> 8;
														}
													}
												}
											}
											idx += 14;
											return X11_PALE_TURQUOISE >>> 8;
										}
										case 'v':
										{
											if (!str[6] || strcmp(str[6], !"IOLET_RED", true, 9))
											{
												return -1;
											}
											switch (str[15] | 0x20)
											{
												case ' ':
												{
													if (str[15])
													{
														switch (str[16] | 0x20)
														{
															case '1':
															{
																idx += 17;
																return X11_PALE_VIOLET_RED_1 >>> 8;
															}
															case '2':
															{
																idx += 17;
																return X11_PALE_VIOLET_RED_2 >>> 8;
															}
															case '3':
															{
																idx += 17;
																return X11_PALE_VIOLET_RED_3 >>> 8;
															}
															case '4':
															{
																idx += 17;
																return X11_PALE_VIOLET_RED_4 >>> 8;
															}
														}
													}
												}
												case '_' | 0x20:
												{
													switch (str[16] | 0x20)
													{
														case '1':
														{
															idx += 17;
															return X11_PALE_VIOLET_RED_1 >>> 8;
														}
														case '2':
														{
															idx += 17;
															return X11_PALE_VIOLET_RED_2 >>> 8;
														}
														case '3':
														{
															idx += 17;
															return X11_PALE_VIOLET_RED_3 >>> 8;
														}
														case '4':
														{
															idx += 17;
															return X11_PALE_VIOLET_RED_4 >>> 8;
														}
													}
												}
											}
											idx += 15;
											return X11_PALE_VIOLET_RED >>> 8;
										}
									}
								}
								case 'g':
								{
									switch (str[5] | 0x20)
									{
										case 'o':
										{
											if (str[6] && !strcmp(str[6], !"LDENROD", true, 7))
											{
												idx += 13;
												return X11_PALEGOLDENROD >>> 8;
											}
										}
										case 'r':
										{
											if (!str[6] || strcmp(str[6], !"EEN", true, 3))
											{
												return -1;
											}
											switch (str[9] | 0x20)
											{
												case '1':
												{
													idx += 10;
													return X11_PALEGREEN1 >>> 8;
												}
												case '2':
												{
													idx += 10;
													return X11_PALEGREEN2 >>> 8;
												}
												case '3':
												{
													idx += 10;
													return X11_PALEGREEN3 >>> 8;
												}
												case '4':
												{
													idx += 10;
													return X11_PALEGREEN4 >>> 8;
												}
											}
											idx += 9;
											return X11_PALEGREEN >>> 8;
										}
									}
								}
								case 't':
								{
									if (!str[5] || strcmp(str[5], !"URQUOISE", true, 8))
									{
										return -1;
									}
									switch (str[13] | 0x20)
									{
										case '1':
										{
											idx += 14;
											return X11_PALETURQUOISE1 >>> 8;
										}
										case '2':
										{
											idx += 14;
											return X11_PALETURQUOISE2 >>> 8;
										}
										case '3':
										{
											idx += 14;
											return X11_PALETURQUOISE3 >>> 8;
										}
										case '4':
										{
											idx += 14;
											return X11_PALETURQUOISE4 >>> 8;
										}
									}
									idx += 13;
									return X11_PALETURQUOISE >>> 8;
								}
								case 'v':
								{
									if (!str[5] || strcmp(str[5], !"IOLETRED", true, 8))
									{
										return -1;
									}
									switch (str[13] | 0x20)
									{
										case '1':
										{
											idx += 14;
											return X11_PALEVIOLETRED1 >>> 8;
										}
										case '2':
										{
											idx += 14;
											return X11_PALEVIOLETRED2 >>> 8;
										}
										case '3':
										{
											idx += 14;
											return X11_PALEVIOLETRED3 >>> 8;
										}
										case '4':
										{
											idx += 14;
											return X11_PALEVIOLETRED4 >>> 8;
										}
									}
									idx += 13;
									return X11_PALEVIOLETRED >>> 8;
								}
							}
						}
						case 'p':
						{
							if (!str[3] || strcmp(str[3], !"AYA", true, 3))
							{
								return -1;
							}
							switch (str[6] | 0x20)
							{
								case ' ':
								{
									if (str[6])
									{
										if (str[7] && !strcmp(str[7], !"WHIP", true, 4))
										{
											idx += 11;
											return X11_PAPAYA_WHIP >>> 8;
										}
									}
								}
								case '_' | 0x20:
								{
									if (str[7] && !strcmp(str[7], !"WHIP", true, 4))
									{
										idx += 11;
										return X11_PAPAYA_WHIP >>> 8;
									}
								}
								case 'w':
								{
									if (str[7] && !strcmp(str[7], !"HIP", true, 3))
									{
										idx += 10;
										return X11_PAPAYAWHIP >>> 8;
									}
								}
							}
						}
					}
				}
				case 'e':
				{
					switch (str[2] | 0x20)
					{
						case 'a':
						{
							if (!str[3] || strcmp(str[3], !"CH", true, 2))
							{
								return -1;
							}
							switch (str[5] | 0x20)
							{
								case ' ':
								{
									if (str[5])
									{
										if (!str[6] || strcmp(str[6], !"PUFF", true, 4))
										{
											return -1;
										}
										switch (str[10] | 0x20)
										{
											case ' ':
											{
												if (str[10])
												{
													switch (str[11] | 0x20)
													{
														case '1':
														{
															idx += 12;
															return X11_PEACH_PUFF_1 >>> 8;
														}
														case '2':
														{
															idx += 12;
															return X11_PEACH_PUFF_2 >>> 8;
														}
														case '3':
														{
															idx += 12;
															return X11_PEACH_PUFF_3 >>> 8;
														}
														case '4':
														{
															idx += 12;
															return X11_PEACH_PUFF_4 >>> 8;
														}
													}
												}
											}
											case '_' | 0x20:
											{
												switch (str[11] | 0x20)
												{
													case '1':
													{
														idx += 12;
														return X11_PEACH_PUFF_1 >>> 8;
													}
													case '2':
													{
														idx += 12;
														return X11_PEACH_PUFF_2 >>> 8;
													}
													case '3':
													{
														idx += 12;
														return X11_PEACH_PUFF_3 >>> 8;
													}
													case '4':
													{
														idx += 12;
														return X11_PEACH_PUFF_4 >>> 8;
													}
												}
											}
										}
										idx += 10;
										return X11_PEACH_PUFF >>> 8;
									}
								}
								case '_' | 0x20:
								{
									if (!str[6] || strcmp(str[6], !"PUFF", true, 4))
									{
										return -1;
									}
									switch (str[10] | 0x20)
									{
										case ' ':
										{
											if (str[10])
											{
												switch (str[11] | 0x20)
												{
													case '1':
													{
														idx += 12;
														return X11_PEACH_PUFF_1 >>> 8;
													}
													case '2':
													{
														idx += 12;
														return X11_PEACH_PUFF_2 >>> 8;
													}
													case '3':
													{
														idx += 12;
														return X11_PEACH_PUFF_3 >>> 8;
													}
													case '4':
													{
														idx += 12;
														return X11_PEACH_PUFF_4 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[11] | 0x20)
											{
												case '1':
												{
													idx += 12;
													return X11_PEACH_PUFF_1 >>> 8;
												}
												case '2':
												{
													idx += 12;
													return X11_PEACH_PUFF_2 >>> 8;
												}
												case '3':
												{
													idx += 12;
													return X11_PEACH_PUFF_3 >>> 8;
												}
												case '4':
												{
													idx += 12;
													return X11_PEACH_PUFF_4 >>> 8;
												}
											}
										}
									}
									idx += 10;
									return X11_PEACH_PUFF >>> 8;
								}
								case 'p':
								{
									if (!str[6] || strcmp(str[6], !"UFF", true, 3))
									{
										return -1;
									}
									switch (str[9] | 0x20)
									{
										case '1':
										{
											idx += 10;
											return X11_PEACHPUFF1 >>> 8;
										}
										case '2':
										{
											idx += 10;
											return X11_PEACHPUFF2 >>> 8;
										}
										case '3':
										{
											idx += 10;
											return X11_PEACHPUFF3 >>> 8;
										}
										case '4':
										{
											idx += 10;
											return X11_PEACHPUFF4 >>> 8;
										}
									}
									idx += 9;
									return X11_PEACHPUFF >>> 8;
								}
							}
						}
						case 'r':
						{
							if (str[3] == 'U')
							{
								idx += 4;
								return X11_PERU >>> 8;
							}
						}
					}
				}
				case 'i':
				{
					if (!str[2] || strcmp(str[2], !"NK", true, 2))
					{
						return -1;
					}
					switch (str[4] | 0x20)
					{
						case ' ':
						{
							if (str[4])
							{
								switch (str[5] | 0x20)
								{
									case '1':
									{
										idx += 6;
										return X11_PINK_1 >>> 8;
									}
									case '2':
									{
										idx += 6;
										return X11_PINK_2 >>> 8;
									}
									case '3':
									{
										idx += 6;
										return X11_PINK_3 >>> 8;
									}
									case '4':
									{
										idx += 6;
										return X11_PINK_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[5] | 0x20)
							{
								case '1':
								{
									idx += 6;
									return X11_PINK_1 >>> 8;
								}
								case '2':
								{
									idx += 6;
									return X11_PINK_2 >>> 8;
								}
								case '3':
								{
									idx += 6;
									return X11_PINK_3 >>> 8;
								}
								case '4':
								{
									idx += 6;
									return X11_PINK_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 5;
							return X11_PINK1 >>> 8;
						}
						case '2':
						{
							idx += 5;
							return X11_PINK2 >>> 8;
						}
						case '3':
						{
							idx += 5;
							return X11_PINK3 >>> 8;
						}
						case '4':
						{
							idx += 5;
							return X11_PINK4 >>> 8;
						}
					}
					idx += 4;
					return X11_PINK >>> 8;
				}
				case 'l':
				{
					if (!str[2] || strcmp(str[2], !"UM", true, 2))
					{
						return -1;
					}
					switch (str[4] | 0x20)
					{
						case ' ':
						{
							if (str[4])
							{
								switch (str[5] | 0x20)
								{
									case '1':
									{
										idx += 6;
										return X11_PLUM_1 >>> 8;
									}
									case '2':
									{
										idx += 6;
										return X11_PLUM_2 >>> 8;
									}
									case '3':
									{
										idx += 6;
										return X11_PLUM_3 >>> 8;
									}
									case '4':
									{
										idx += 6;
										return X11_PLUM_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[5] | 0x20)
							{
								case '1':
								{
									idx += 6;
									return X11_PLUM_1 >>> 8;
								}
								case '2':
								{
									idx += 6;
									return X11_PLUM_2 >>> 8;
								}
								case '3':
								{
									idx += 6;
									return X11_PLUM_3 >>> 8;
								}
								case '4':
								{
									idx += 6;
									return X11_PLUM_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 5;
							return X11_PLUM1 >>> 8;
						}
						case '2':
						{
							idx += 5;
							return X11_PLUM2 >>> 8;
						}
						case '3':
						{
							idx += 5;
							return X11_PLUM3 >>> 8;
						}
						case '4':
						{
							idx += 5;
							return X11_PLUM4 >>> 8;
						}
					}
					idx += 4;
					return X11_PLUM >>> 8;
				}
				case 'o':
				{
					if (!str[2] || strcmp(str[2], !"WDER", true, 4))
					{
						return -1;
					}
					switch (str[6] | 0x20)
					{
						case ' ':
						{
							if (str[6])
							{
								if (str[7] && !strcmp(str[7], !"BLUE", true, 4))
								{
									idx += 11;
									return X11_POWDER_BLUE >>> 8;
								}
							}
						}
						case '_' | 0x20:
						{
							if (str[7] && !strcmp(str[7], !"BLUE", true, 4))
							{
								idx += 11;
								return X11_POWDER_BLUE >>> 8;
							}
						}
						case 'b':
						{
							if (str[7] && !strcmp(str[7], !"LUE", true, 3))
							{
								idx += 10;
								return X11_POWDERBLUE >>> 8;
							}
						}
					}
				}
				case 'u':
				{
					if (!str[2] || strcmp(str[2], !"RPLE", true, 4))
					{
						return -1;
					}
					switch (str[6] | 0x20)
					{
						case ' ':
						{
							if (str[6])
							{
								switch (str[7] | 0x20)
								{
									case '1':
									{
										idx += 8;
										return X11_PURPLE_1 >>> 8;
									}
									case '2':
									{
										idx += 8;
										return X11_PURPLE_2 >>> 8;
									}
									case '3':
									{
										idx += 8;
										return X11_PURPLE_3 >>> 8;
									}
									case '4':
									{
										idx += 8;
										return X11_PURPLE_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[7] | 0x20)
							{
								case '1':
								{
									idx += 8;
									return X11_PURPLE_1 >>> 8;
								}
								case '2':
								{
									idx += 8;
									return X11_PURPLE_2 >>> 8;
								}
								case '3':
								{
									idx += 8;
									return X11_PURPLE_3 >>> 8;
								}
								case '4':
								{
									idx += 8;
									return X11_PURPLE_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 7;
							return X11_PURPLE1 >>> 8;
						}
						case '2':
						{
							idx += 7;
							return X11_PURPLE2 >>> 8;
						}
						case '3':
						{
							idx += 7;
							return X11_PURPLE3 >>> 8;
						}
						case '4':
						{
							idx += 7;
							return X11_PURPLE4 >>> 8;
						}
					}
					idx += 6;
					return X11_PURPLE >>> 8;
				}
			}
		}
		case 'r':
		{
			switch (str[1] | 0x20)
			{
				case 'e':
				{
					if (str[2] != 'D')
					{
						return -1;
					}
					switch (str[3] | 0x20)
					{
						case ' ':
						{
							if (str[3])
							{
								switch (str[4] | 0x20)
								{
									case '1':
									{
										idx += 5;
										return X11_RED_1 >>> 8;
									}
									case '2':
									{
										idx += 5;
										return X11_RED_2 >>> 8;
									}
									case '3':
									{
										idx += 5;
										return X11_RED_3 >>> 8;
									}
									case '4':
									{
										idx += 5;
										return X11_RED_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[4] | 0x20)
							{
								case '1':
								{
									idx += 5;
									return X11_RED_1 >>> 8;
								}
								case '2':
								{
									idx += 5;
									return X11_RED_2 >>> 8;
								}
								case '3':
								{
									idx += 5;
									return X11_RED_3 >>> 8;
								}
								case '4':
								{
									idx += 5;
									return X11_RED_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 4;
							return X11_RED1 >>> 8;
						}
						case '2':
						{
							idx += 4;
							return X11_RED2 >>> 8;
						}
						case '3':
						{
							idx += 4;
							return X11_RED3 >>> 8;
						}
						case '4':
						{
							idx += 4;
							return X11_RED4 >>> 8;
						}
					}
					idx += 3;
					return X11_RED >>> 8;
				}
				case 'o':
				{
					switch (str[2] | 0x20)
					{
						case 's':
						{
							if (str[3] != 'Y')
							{
								return -1;
							}
							switch (str[4] | 0x20)
							{
								case ' ':
								{
									if (str[4])
									{
										if (!str[5] || strcmp(str[5], !"BROWN", true, 5))
										{
											return -1;
										}
										switch (str[10] | 0x20)
										{
											case ' ':
											{
												if (str[10])
												{
													switch (str[11] | 0x20)
													{
														case '1':
														{
															idx += 12;
															return X11_ROSY_BROWN_1 >>> 8;
														}
														case '2':
														{
															idx += 12;
															return X11_ROSY_BROWN_2 >>> 8;
														}
														case '3':
														{
															idx += 12;
															return X11_ROSY_BROWN_3 >>> 8;
														}
														case '4':
														{
															idx += 12;
															return X11_ROSY_BROWN_4 >>> 8;
														}
													}
												}
											}
											case '_' | 0x20:
											{
												switch (str[11] | 0x20)
												{
													case '1':
													{
														idx += 12;
														return X11_ROSY_BROWN_1 >>> 8;
													}
													case '2':
													{
														idx += 12;
														return X11_ROSY_BROWN_2 >>> 8;
													}
													case '3':
													{
														idx += 12;
														return X11_ROSY_BROWN_3 >>> 8;
													}
													case '4':
													{
														idx += 12;
														return X11_ROSY_BROWN_4 >>> 8;
													}
												}
											}
										}
										idx += 10;
										return X11_ROSY_BROWN >>> 8;
									}
								}
								case '_' | 0x20:
								{
									if (!str[5] || strcmp(str[5], !"BROWN", true, 5))
									{
										return -1;
									}
									switch (str[10] | 0x20)
									{
										case ' ':
										{
											if (str[10])
											{
												switch (str[11] | 0x20)
												{
													case '1':
													{
														idx += 12;
														return X11_ROSY_BROWN_1 >>> 8;
													}
													case '2':
													{
														idx += 12;
														return X11_ROSY_BROWN_2 >>> 8;
													}
													case '3':
													{
														idx += 12;
														return X11_ROSY_BROWN_3 >>> 8;
													}
													case '4':
													{
														idx += 12;
														return X11_ROSY_BROWN_4 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[11] | 0x20)
											{
												case '1':
												{
													idx += 12;
													return X11_ROSY_BROWN_1 >>> 8;
												}
												case '2':
												{
													idx += 12;
													return X11_ROSY_BROWN_2 >>> 8;
												}
												case '3':
												{
													idx += 12;
													return X11_ROSY_BROWN_3 >>> 8;
												}
												case '4':
												{
													idx += 12;
													return X11_ROSY_BROWN_4 >>> 8;
												}
											}
										}
									}
									idx += 10;
									return X11_ROSY_BROWN >>> 8;
								}
								case 'b':
								{
									if (!str[5] || strcmp(str[5], !"ROWN", true, 4))
									{
										return -1;
									}
									switch (str[9] | 0x20)
									{
										case '1':
										{
											idx += 10;
											return X11_ROSYBROWN1 >>> 8;
										}
										case '2':
										{
											idx += 10;
											return X11_ROSYBROWN2 >>> 8;
										}
										case '3':
										{
											idx += 10;
											return X11_ROSYBROWN3 >>> 8;
										}
										case '4':
										{
											idx += 10;
											return X11_ROSYBROWN4 >>> 8;
										}
									}
									idx += 9;
									return X11_ROSYBROWN >>> 8;
								}
							}
						}
						case 'y':
						{
							if (!str[3] || strcmp(str[3], !"AL", true, 2))
							{
								return -1;
							}
							switch (str[5] | 0x20)
							{
								case ' ':
								{
									if (str[5])
									{
										if (!str[6] || strcmp(str[6], !"BLUE", true, 4))
										{
											return -1;
										}
										switch (str[10] | 0x20)
										{
											case ' ':
											{
												if (str[10])
												{
													switch (str[11] | 0x20)
													{
														case '1':
														{
															idx += 12;
															return X11_ROYAL_BLUE_1 >>> 8;
														}
														case '2':
														{
															idx += 12;
															return X11_ROYAL_BLUE_2 >>> 8;
														}
														case '3':
														{
															idx += 12;
															return X11_ROYAL_BLUE_3 >>> 8;
														}
														case '4':
														{
															idx += 12;
															return X11_ROYAL_BLUE_4 >>> 8;
														}
													}
												}
											}
											case '_' | 0x20:
											{
												switch (str[11] | 0x20)
												{
													case '1':
													{
														idx += 12;
														return X11_ROYAL_BLUE_1 >>> 8;
													}
													case '2':
													{
														idx += 12;
														return X11_ROYAL_BLUE_2 >>> 8;
													}
													case '3':
													{
														idx += 12;
														return X11_ROYAL_BLUE_3 >>> 8;
													}
													case '4':
													{
														idx += 12;
														return X11_ROYAL_BLUE_4 >>> 8;
													}
												}
											}
										}
										idx += 10;
										return X11_ROYAL_BLUE >>> 8;
									}
								}
								case '_' | 0x20:
								{
									if (!str[6] || strcmp(str[6], !"BLUE", true, 4))
									{
										return -1;
									}
									switch (str[10] | 0x20)
									{
										case ' ':
										{
											if (str[10])
											{
												switch (str[11] | 0x20)
												{
													case '1':
													{
														idx += 12;
														return X11_ROYAL_BLUE_1 >>> 8;
													}
													case '2':
													{
														idx += 12;
														return X11_ROYAL_BLUE_2 >>> 8;
													}
													case '3':
													{
														idx += 12;
														return X11_ROYAL_BLUE_3 >>> 8;
													}
													case '4':
													{
														idx += 12;
														return X11_ROYAL_BLUE_4 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[11] | 0x20)
											{
												case '1':
												{
													idx += 12;
													return X11_ROYAL_BLUE_1 >>> 8;
												}
												case '2':
												{
													idx += 12;
													return X11_ROYAL_BLUE_2 >>> 8;
												}
												case '3':
												{
													idx += 12;
													return X11_ROYAL_BLUE_3 >>> 8;
												}
												case '4':
												{
													idx += 12;
													return X11_ROYAL_BLUE_4 >>> 8;
												}
											}
										}
									}
									idx += 10;
									return X11_ROYAL_BLUE >>> 8;
								}
								case 'b':
								{
									if (!str[6] || strcmp(str[6], !"LUE", true, 3))
									{
										return -1;
									}
									switch (str[9] | 0x20)
									{
										case '1':
										{
											idx += 10;
											return X11_ROYALBLUE1 >>> 8;
										}
										case '2':
										{
											idx += 10;
											return X11_ROYALBLUE2 >>> 8;
										}
										case '3':
										{
											idx += 10;
											return X11_ROYALBLUE3 >>> 8;
										}
										case '4':
										{
											idx += 10;
											return X11_ROYALBLUE4 >>> 8;
										}
									}
									idx += 9;
									return X11_ROYALBLUE >>> 8;
								}
							}
						}
					}
				}
			}
		}
		case 's':
		{
			switch (str[1] | 0x20)
			{
				case 'a':
				{
					switch (str[2] | 0x20)
					{
						case 'd':
						{
							if (!str[3] || strcmp(str[3], !"DLE", true, 3))
							{
								return -1;
							}
							switch (str[6] | 0x20)
							{
								case ' ':
								{
									if (str[6])
									{
										if (str[7] && !strcmp(str[7], !"BROWN", true, 5))
										{
											idx += 12;
											return X11_SADDLE_BROWN >>> 8;
										}
									}
								}
								case '_' | 0x20:
								{
									if (str[7] && !strcmp(str[7], !"BROWN", true, 5))
									{
										idx += 12;
										return X11_SADDLE_BROWN >>> 8;
									}
								}
								case 'b':
								{
									if (str[7] && !strcmp(str[7], !"ROWN", true, 4))
									{
										idx += 11;
										return X11_SADDLEBROWN >>> 8;
									}
								}
							}
						}
						case 'l':
						{
							if (!str[3] || strcmp(str[3], !"MON", true, 3))
							{
								return -1;
							}
							switch (str[6] | 0x20)
							{
								case ' ':
								{
									if (str[6])
									{
										switch (str[7] | 0x20)
										{
											case '1':
											{
												idx += 8;
												return X11_SALMON_1 >>> 8;
											}
											case '2':
											{
												idx += 8;
												return X11_SALMON_2 >>> 8;
											}
											case '3':
											{
												idx += 8;
												return X11_SALMON_3 >>> 8;
											}
											case '4':
											{
												idx += 8;
												return X11_SALMON_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[7] | 0x20)
									{
										case '1':
										{
											idx += 8;
											return X11_SALMON_1 >>> 8;
										}
										case '2':
										{
											idx += 8;
											return X11_SALMON_2 >>> 8;
										}
										case '3':
										{
											idx += 8;
											return X11_SALMON_3 >>> 8;
										}
										case '4':
										{
											idx += 8;
											return X11_SALMON_4 >>> 8;
										}
									}
								}
								case '1':
								{
									idx += 7;
									return X11_SALMON1 >>> 8;
								}
								case '2':
								{
									idx += 7;
									return X11_SALMON2 >>> 8;
								}
								case '3':
								{
									idx += 7;
									return X11_SALMON3 >>> 8;
								}
								case '4':
								{
									idx += 7;
									return X11_SALMON4 >>> 8;
								}
							}
							idx += 6;
							return X11_SALMON >>> 8;
						}
						case 'n':
						{
							if (!str[3] || strcmp(str[3], !"DY", true, 2))
							{
								return -1;
							}
							switch (str[5] | 0x20)
							{
								case ' ':
								{
									if (str[5])
									{
										if (str[6] && !strcmp(str[6], !"BROWN", true, 5))
										{
											idx += 11;
											return X11_SANDY_BROWN >>> 8;
										}
									}
								}
								case '_' | 0x20:
								{
									if (str[6] && !strcmp(str[6], !"BROWN", true, 5))
									{
										idx += 11;
										return X11_SANDY_BROWN >>> 8;
									}
								}
								case 'b':
								{
									if (str[6] && !strcmp(str[6], !"ROWN", true, 4))
									{
										idx += 10;
										return X11_SANDYBROWN >>> 8;
									}
								}
							}
						}
					}
				}
				case 'e':
				{
					if (str[2] != 'A')
					{
						return -1;
					}
					switch (str[3] | 0x20)
					{
						case ' ':
						{
							if (str[3])
							{
								if (!str[4] || strcmp(str[4], !"GREEN", true, 5))
								{
									return -1;
								}
								switch (str[9] | 0x20)
								{
									case ' ':
									{
										if (str[9])
										{
											switch (str[10] | 0x20)
											{
												case '1':
												{
													idx += 11;
													return X11_SEA_GREEN_1 >>> 8;
												}
												case '2':
												{
													idx += 11;
													return X11_SEA_GREEN_2 >>> 8;
												}
												case '3':
												{
													idx += 11;
													return X11_SEA_GREEN_3 >>> 8;
												}
												case '4':
												{
													idx += 11;
													return X11_SEA_GREEN_4 >>> 8;
												}
											}
										}
									}
									case '_' | 0x20:
									{
										switch (str[10] | 0x20)
										{
											case '1':
											{
												idx += 11;
												return X11_SEA_GREEN_1 >>> 8;
											}
											case '2':
											{
												idx += 11;
												return X11_SEA_GREEN_2 >>> 8;
											}
											case '3':
											{
												idx += 11;
												return X11_SEA_GREEN_3 >>> 8;
											}
											case '4':
											{
												idx += 11;
												return X11_SEA_GREEN_4 >>> 8;
											}
										}
									}
								}
								idx += 9;
								return X11_SEA_GREEN >>> 8;
							}
						}
						case '_' | 0x20:
						{
							if (!str[4] || strcmp(str[4], !"GREEN", true, 5))
							{
								return -1;
							}
							switch (str[9] | 0x20)
							{
								case ' ':
								{
									if (str[9])
									{
										switch (str[10] | 0x20)
										{
											case '1':
											{
												idx += 11;
												return X11_SEA_GREEN_1 >>> 8;
											}
											case '2':
											{
												idx += 11;
												return X11_SEA_GREEN_2 >>> 8;
											}
											case '3':
											{
												idx += 11;
												return X11_SEA_GREEN_3 >>> 8;
											}
											case '4':
											{
												idx += 11;
												return X11_SEA_GREEN_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[10] | 0x20)
									{
										case '1':
										{
											idx += 11;
											return X11_SEA_GREEN_1 >>> 8;
										}
										case '2':
										{
											idx += 11;
											return X11_SEA_GREEN_2 >>> 8;
										}
										case '3':
										{
											idx += 11;
											return X11_SEA_GREEN_3 >>> 8;
										}
										case '4':
										{
											idx += 11;
											return X11_SEA_GREEN_4 >>> 8;
										}
									}
								}
							}
							idx += 9;
							return X11_SEA_GREEN >>> 8;
						}
						case 'g':
						{
							if (!str[4] || strcmp(str[4], !"REEN", true, 4))
							{
								return -1;
							}
							switch (str[8] | 0x20)
							{
								case '1':
								{
									idx += 9;
									return X11_SEAGREEN1 >>> 8;
								}
								case '2':
								{
									idx += 9;
									return X11_SEAGREEN2 >>> 8;
								}
								case '3':
								{
									idx += 9;
									return X11_SEAGREEN3 >>> 8;
								}
								case '4':
								{
									idx += 9;
									return X11_SEAGREEN4 >>> 8;
								}
							}
							idx += 8;
							return X11_SEAGREEN >>> 8;
						}
						case 's':
						{
							if (!str[4] || strcmp(str[4], !"HELL", true, 4))
							{
								return -1;
							}
							switch (str[8] | 0x20)
							{
								case ' ':
								{
									if (str[8])
									{
										switch (str[9] | 0x20)
										{
											case '1':
											{
												idx += 10;
												return X11_SEASHELL_1 >>> 8;
											}
											case '2':
											{
												idx += 10;
												return X11_SEASHELL_2 >>> 8;
											}
											case '3':
											{
												idx += 10;
												return X11_SEASHELL_3 >>> 8;
											}
											case '4':
											{
												idx += 10;
												return X11_SEASHELL_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[9] | 0x20)
									{
										case '1':
										{
											idx += 10;
											return X11_SEASHELL_1 >>> 8;
										}
										case '2':
										{
											idx += 10;
											return X11_SEASHELL_2 >>> 8;
										}
										case '3':
										{
											idx += 10;
											return X11_SEASHELL_3 >>> 8;
										}
										case '4':
										{
											idx += 10;
											return X11_SEASHELL_4 >>> 8;
										}
									}
								}
								case '1':
								{
									idx += 9;
									return X11_SEASHELL1 >>> 8;
								}
								case '2':
								{
									idx += 9;
									return X11_SEASHELL2 >>> 8;
								}
								case '3':
								{
									idx += 9;
									return X11_SEASHELL3 >>> 8;
								}
								case '4':
								{
									idx += 9;
									return X11_SEASHELL4 >>> 8;
								}
							}
							idx += 8;
							return X11_SEASHELL >>> 8;
						}
					}
				}
				case 'i':
				{
					if (!str[2] || strcmp(str[2], !"ENNA", true, 4))
					{
						return -1;
					}
					switch (str[6] | 0x20)
					{
						case ' ':
						{
							if (str[6])
							{
								switch (str[7] | 0x20)
								{
									case '1':
									{
										idx += 8;
										return X11_SIENNA_1 >>> 8;
									}
									case '2':
									{
										idx += 8;
										return X11_SIENNA_2 >>> 8;
									}
									case '3':
									{
										idx += 8;
										return X11_SIENNA_3 >>> 8;
									}
									case '4':
									{
										idx += 8;
										return X11_SIENNA_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[7] | 0x20)
							{
								case '1':
								{
									idx += 8;
									return X11_SIENNA_1 >>> 8;
								}
								case '2':
								{
									idx += 8;
									return X11_SIENNA_2 >>> 8;
								}
								case '3':
								{
									idx += 8;
									return X11_SIENNA_3 >>> 8;
								}
								case '4':
								{
									idx += 8;
									return X11_SIENNA_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 7;
							return X11_SIENNA1 >>> 8;
						}
						case '2':
						{
							idx += 7;
							return X11_SIENNA2 >>> 8;
						}
						case '3':
						{
							idx += 7;
							return X11_SIENNA3 >>> 8;
						}
						case '4':
						{
							idx += 7;
							return X11_SIENNA4 >>> 8;
						}
					}
					idx += 6;
					return X11_SIENNA >>> 8;
				}
				case 'k':
				{
					if (str[2] != 'Y')
					{
						return -1;
					}
					switch (str[3] | 0x20)
					{
						case ' ':
						{
							if (str[3])
							{
								if (!str[4] || strcmp(str[4], !"BLUE", true, 4))
								{
									return -1;
								}
								switch (str[8] | 0x20)
								{
									case ' ':
									{
										if (str[8])
										{
											switch (str[9] | 0x20)
											{
												case '1':
												{
													idx += 10;
													return X11_SKY_BLUE_1 >>> 8;
												}
												case '2':
												{
													idx += 10;
													return X11_SKY_BLUE_2 >>> 8;
												}
												case '3':
												{
													idx += 10;
													return X11_SKY_BLUE_3 >>> 8;
												}
												case '4':
												{
													idx += 10;
													return X11_SKY_BLUE_4 >>> 8;
												}
											}
										}
									}
									case '_' | 0x20:
									{
										switch (str[9] | 0x20)
										{
											case '1':
											{
												idx += 10;
												return X11_SKY_BLUE_1 >>> 8;
											}
											case '2':
											{
												idx += 10;
												return X11_SKY_BLUE_2 >>> 8;
											}
											case '3':
											{
												idx += 10;
												return X11_SKY_BLUE_3 >>> 8;
											}
											case '4':
											{
												idx += 10;
												return X11_SKY_BLUE_4 >>> 8;
											}
										}
									}
								}
								idx += 8;
								return X11_SKY_BLUE >>> 8;
							}
						}
						case '_' | 0x20:
						{
							if (!str[4] || strcmp(str[4], !"BLUE", true, 4))
							{
								return -1;
							}
							switch (str[8] | 0x20)
							{
								case ' ':
								{
									if (str[8])
									{
										switch (str[9] | 0x20)
										{
											case '1':
											{
												idx += 10;
												return X11_SKY_BLUE_1 >>> 8;
											}
											case '2':
											{
												idx += 10;
												return X11_SKY_BLUE_2 >>> 8;
											}
											case '3':
											{
												idx += 10;
												return X11_SKY_BLUE_3 >>> 8;
											}
											case '4':
											{
												idx += 10;
												return X11_SKY_BLUE_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[9] | 0x20)
									{
										case '1':
										{
											idx += 10;
											return X11_SKY_BLUE_1 >>> 8;
										}
										case '2':
										{
											idx += 10;
											return X11_SKY_BLUE_2 >>> 8;
										}
										case '3':
										{
											idx += 10;
											return X11_SKY_BLUE_3 >>> 8;
										}
										case '4':
										{
											idx += 10;
											return X11_SKY_BLUE_4 >>> 8;
										}
									}
								}
							}
							idx += 8;
							return X11_SKY_BLUE >>> 8;
						}
						case 'b':
						{
							if (!str[4] || strcmp(str[4], !"LUE", true, 3))
							{
								return -1;
							}
							switch (str[7] | 0x20)
							{
								case '1':
								{
									idx += 8;
									return X11_SKYBLUE1 >>> 8;
								}
								case '2':
								{
									idx += 8;
									return X11_SKYBLUE2 >>> 8;
								}
								case '3':
								{
									idx += 8;
									return X11_SKYBLUE3 >>> 8;
								}
								case '4':
								{
									idx += 8;
									return X11_SKYBLUE4 >>> 8;
								}
							}
							idx += 7;
							return X11_SKYBLUE >>> 8;
						}
					}
				}
				case 'l':
				{
					if (!str[2] || strcmp(str[2], !"ATE", true, 3))
					{
						return -1;
					}
					switch (str[5] | 0x20)
					{
						case ' ':
						{
							if (str[5])
							{
								switch (str[6] | 0x20)
								{
									case 'b':
									{
										if (!str[7] || strcmp(str[7], !"LUE", true, 3))
										{
											return -1;
										}
										switch (str[10] | 0x20)
										{
											case ' ':
											{
												if (str[10])
												{
													switch (str[11] | 0x20)
													{
														case '1':
														{
															idx += 12;
															return X11_SLATE_BLUE_1 >>> 8;
														}
														case '2':
														{
															idx += 12;
															return X11_SLATE_BLUE_2 >>> 8;
														}
														case '3':
														{
															idx += 12;
															return X11_SLATE_BLUE_3 >>> 8;
														}
														case '4':
														{
															idx += 12;
															return X11_SLATE_BLUE_4 >>> 8;
														}
													}
												}
											}
											case '_' | 0x20:
											{
												switch (str[11] | 0x20)
												{
													case '1':
													{
														idx += 12;
														return X11_SLATE_BLUE_1 >>> 8;
													}
													case '2':
													{
														idx += 12;
														return X11_SLATE_BLUE_2 >>> 8;
													}
													case '3':
													{
														idx += 12;
														return X11_SLATE_BLUE_3 >>> 8;
													}
													case '4':
													{
														idx += 12;
														return X11_SLATE_BLUE_4 >>> 8;
													}
												}
											}
										}
										idx += 10;
										return X11_SLATE_BLUE >>> 8;
									}
									case 'g':
									{
										if (str[7] != 'R')
										{
											return -1;
										}
										switch (str[8] | 0x20)
										{
											case 'a':
											{
												if (str[9] != 'Y')
												{
													return -1;
												}
												switch (str[10] | 0x20)
												{
													case ' ':
													{
														if (str[10])
														{
															switch (str[11] | 0x20)
															{
																case '1':
																{
																	idx += 12;
																	return X11_SLATE_GRAY_1 >>> 8;
																}
																case '2':
																{
																	idx += 12;
																	return X11_SLATE_GRAY_2 >>> 8;
																}
																case '3':
																{
																	idx += 12;
																	return X11_SLATE_GRAY_3 >>> 8;
																}
																case '4':
																{
																	idx += 12;
																	return X11_SLATE_GRAY_4 >>> 8;
																}
															}
														}
													}
													case '_' | 0x20:
													{
														switch (str[11] | 0x20)
														{
															case '1':
															{
																idx += 12;
																return X11_SLATE_GRAY_1 >>> 8;
															}
															case '2':
															{
																idx += 12;
																return X11_SLATE_GRAY_2 >>> 8;
															}
															case '3':
															{
																idx += 12;
																return X11_SLATE_GRAY_3 >>> 8;
															}
															case '4':
															{
																idx += 12;
																return X11_SLATE_GRAY_4 >>> 8;
															}
														}
													}
												}
												idx += 10;
												return X11_SLATE_GRAY >>> 8;
											}
											case 'e':
											{
												if (str[9] == 'Y')
												{
													idx += 10;
													return X11_SLATE_GREY >>> 8;
												}
											}
										}
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[6] | 0x20)
							{
								case 'b':
								{
									if (!str[7] || strcmp(str[7], !"LUE", true, 3))
									{
										return -1;
									}
									switch (str[10] | 0x20)
									{
										case ' ':
										{
											if (str[10])
											{
												switch (str[11] | 0x20)
												{
													case '1':
													{
														idx += 12;
														return X11_SLATE_BLUE_1 >>> 8;
													}
													case '2':
													{
														idx += 12;
														return X11_SLATE_BLUE_2 >>> 8;
													}
													case '3':
													{
														idx += 12;
														return X11_SLATE_BLUE_3 >>> 8;
													}
													case '4':
													{
														idx += 12;
														return X11_SLATE_BLUE_4 >>> 8;
													}
												}
											}
										}
										case '_' | 0x20:
										{
											switch (str[11] | 0x20)
											{
												case '1':
												{
													idx += 12;
													return X11_SLATE_BLUE_1 >>> 8;
												}
												case '2':
												{
													idx += 12;
													return X11_SLATE_BLUE_2 >>> 8;
												}
												case '3':
												{
													idx += 12;
													return X11_SLATE_BLUE_3 >>> 8;
												}
												case '4':
												{
													idx += 12;
													return X11_SLATE_BLUE_4 >>> 8;
												}
											}
										}
									}
									idx += 10;
									return X11_SLATE_BLUE >>> 8;
								}
								case 'g':
								{
									if (str[7] != 'R')
									{
										return -1;
									}
									switch (str[8] | 0x20)
									{
										case 'a':
										{
											if (str[9] != 'Y')
											{
												return -1;
											}
											switch (str[10] | 0x20)
											{
												case ' ':
												{
													if (str[10])
													{
														switch (str[11] | 0x20)
														{
															case '1':
															{
																idx += 12;
																return X11_SLATE_GRAY_1 >>> 8;
															}
															case '2':
															{
																idx += 12;
																return X11_SLATE_GRAY_2 >>> 8;
															}
															case '3':
															{
																idx += 12;
																return X11_SLATE_GRAY_3 >>> 8;
															}
															case '4':
															{
																idx += 12;
																return X11_SLATE_GRAY_4 >>> 8;
															}
														}
													}
												}
												case '_' | 0x20:
												{
													switch (str[11] | 0x20)
													{
														case '1':
														{
															idx += 12;
															return X11_SLATE_GRAY_1 >>> 8;
														}
														case '2':
														{
															idx += 12;
															return X11_SLATE_GRAY_2 >>> 8;
														}
														case '3':
														{
															idx += 12;
															return X11_SLATE_GRAY_3 >>> 8;
														}
														case '4':
														{
															idx += 12;
															return X11_SLATE_GRAY_4 >>> 8;
														}
													}
												}
											}
											idx += 10;
											return X11_SLATE_GRAY >>> 8;
										}
										case 'e':
										{
											if (str[9] == 'Y')
											{
												idx += 10;
												return X11_SLATE_GREY >>> 8;
											}
										}
									}
								}
							}
						}
						case 'b':
						{
							if (!str[6] || strcmp(str[6], !"LUE", true, 3))
							{
								return -1;
							}
							switch (str[9] | 0x20)
							{
								case '1':
								{
									idx += 10;
									return X11_SLATEBLUE1 >>> 8;
								}
								case '2':
								{
									idx += 10;
									return X11_SLATEBLUE2 >>> 8;
								}
								case '3':
								{
									idx += 10;
									return X11_SLATEBLUE3 >>> 8;
								}
								case '4':
								{
									idx += 10;
									return X11_SLATEBLUE4 >>> 8;
								}
							}
							idx += 9;
							return X11_SLATEBLUE >>> 8;
						}
						case 'g':
						{
							if (str[6] != 'R')
							{
								return -1;
							}
							switch (str[7] | 0x20)
							{
								case 'a':
								{
									if (str[8] != 'Y')
									{
										return -1;
									}
									switch (str[9] | 0x20)
									{
										case '1':
										{
											idx += 10;
											return X11_SLATEGRAY1 >>> 8;
										}
										case '2':
										{
											idx += 10;
											return X11_SLATEGRAY2 >>> 8;
										}
										case '3':
										{
											idx += 10;
											return X11_SLATEGRAY3 >>> 8;
										}
										case '4':
										{
											idx += 10;
											return X11_SLATEGRAY4 >>> 8;
										}
									}
									idx += 9;
									return X11_SLATEGRAY >>> 8;
								}
								case 'e':
								{
									if (str[8] == 'Y')
									{
										idx += 9;
										return X11_SLATEGREY >>> 8;
									}
								}
							}
						}
					}
				}
				case 'n':
				{
					if (!str[2] || strcmp(str[2], !"OW", true, 2))
					{
						return -1;
					}
					switch (str[4] | 0x20)
					{
						case ' ':
						{
							if (str[4])
							{
								switch (str[5] | 0x20)
								{
									case '1':
									{
										idx += 6;
										return X11_SNOW_1 >>> 8;
									}
									case '2':
									{
										idx += 6;
										return X11_SNOW_2 >>> 8;
									}
									case '3':
									{
										idx += 6;
										return X11_SNOW_3 >>> 8;
									}
									case '4':
									{
										idx += 6;
										return X11_SNOW_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[5] | 0x20)
							{
								case '1':
								{
									idx += 6;
									return X11_SNOW_1 >>> 8;
								}
								case '2':
								{
									idx += 6;
									return X11_SNOW_2 >>> 8;
								}
								case '3':
								{
									idx += 6;
									return X11_SNOW_3 >>> 8;
								}
								case '4':
								{
									idx += 6;
									return X11_SNOW_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 5;
							return X11_SNOW1 >>> 8;
						}
						case '2':
						{
							idx += 5;
							return X11_SNOW2 >>> 8;
						}
						case '3':
						{
							idx += 5;
							return X11_SNOW3 >>> 8;
						}
						case '4':
						{
							idx += 5;
							return X11_SNOW4 >>> 8;
						}
					}
					idx += 4;
					return X11_SNOW >>> 8;
				}
				case 'p':
				{
					if (!str[2] || strcmp(str[2], !"RING", true, 4))
					{
						return -1;
					}
					switch (str[6] | 0x20)
					{
						case ' ':
						{
							if (str[6])
							{
								if (!str[7] || strcmp(str[7], !"GREEN", true, 5))
								{
									return -1;
								}
								switch (str[12] | 0x20)
								{
									case ' ':
									{
										if (str[12])
										{
											switch (str[13] | 0x20)
											{
												case '1':
												{
													idx += 14;
													return X11_SPRING_GREEN_1 >>> 8;
												}
												case '2':
												{
													idx += 14;
													return X11_SPRING_GREEN_2 >>> 8;
												}
												case '3':
												{
													idx += 14;
													return X11_SPRING_GREEN_3 >>> 8;
												}
												case '4':
												{
													idx += 14;
													return X11_SPRING_GREEN_4 >>> 8;
												}
											}
										}
									}
									case '_' | 0x20:
									{
										switch (str[13] | 0x20)
										{
											case '1':
											{
												idx += 14;
												return X11_SPRING_GREEN_1 >>> 8;
											}
											case '2':
											{
												idx += 14;
												return X11_SPRING_GREEN_2 >>> 8;
											}
											case '3':
											{
												idx += 14;
												return X11_SPRING_GREEN_3 >>> 8;
											}
											case '4':
											{
												idx += 14;
												return X11_SPRING_GREEN_4 >>> 8;
											}
										}
									}
								}
								idx += 12;
								return X11_SPRING_GREEN >>> 8;
							}
						}
						case '_' | 0x20:
						{
							if (!str[7] || strcmp(str[7], !"GREEN", true, 5))
							{
								return -1;
							}
							switch (str[12] | 0x20)
							{
								case ' ':
								{
									if (str[12])
									{
										switch (str[13] | 0x20)
										{
											case '1':
											{
												idx += 14;
												return X11_SPRING_GREEN_1 >>> 8;
											}
											case '2':
											{
												idx += 14;
												return X11_SPRING_GREEN_2 >>> 8;
											}
											case '3':
											{
												idx += 14;
												return X11_SPRING_GREEN_3 >>> 8;
											}
											case '4':
											{
												idx += 14;
												return X11_SPRING_GREEN_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[13] | 0x20)
									{
										case '1':
										{
											idx += 14;
											return X11_SPRING_GREEN_1 >>> 8;
										}
										case '2':
										{
											idx += 14;
											return X11_SPRING_GREEN_2 >>> 8;
										}
										case '3':
										{
											idx += 14;
											return X11_SPRING_GREEN_3 >>> 8;
										}
										case '4':
										{
											idx += 14;
											return X11_SPRING_GREEN_4 >>> 8;
										}
									}
								}
							}
							idx += 12;
							return X11_SPRING_GREEN >>> 8;
						}
						case 'g':
						{
							if (!str[7] || strcmp(str[7], !"REEN", true, 4))
							{
								return -1;
							}
							switch (str[11] | 0x20)
							{
								case '1':
								{
									idx += 12;
									return X11_SPRINGGREEN1 >>> 8;
								}
								case '2':
								{
									idx += 12;
									return X11_SPRINGGREEN2 >>> 8;
								}
								case '3':
								{
									idx += 12;
									return X11_SPRINGGREEN3 >>> 8;
								}
								case '4':
								{
									idx += 12;
									return X11_SPRINGGREEN4 >>> 8;
								}
							}
							idx += 11;
							return X11_SPRINGGREEN >>> 8;
						}
					}
				}
				case 't':
				{
					if (!str[2] || strcmp(str[2], !"EEL", true, 3))
					{
						return -1;
					}
					switch (str[5] | 0x20)
					{
						case ' ':
						{
							if (str[5])
							{
								if (!str[6] || strcmp(str[6], !"BLUE", true, 4))
								{
									return -1;
								}
								switch (str[10] | 0x20)
								{
									case ' ':
									{
										if (str[10])
										{
											switch (str[11] | 0x20)
											{
												case '1':
												{
													idx += 12;
													return X11_STEEL_BLUE_1 >>> 8;
												}
												case '2':
												{
													idx += 12;
													return X11_STEEL_BLUE_2 >>> 8;
												}
												case '3':
												{
													idx += 12;
													return X11_STEEL_BLUE_3 >>> 8;
												}
												case '4':
												{
													idx += 12;
													return X11_STEEL_BLUE_4 >>> 8;
												}
											}
										}
									}
									case '_' | 0x20:
									{
										switch (str[11] | 0x20)
										{
											case '1':
											{
												idx += 12;
												return X11_STEEL_BLUE_1 >>> 8;
											}
											case '2':
											{
												idx += 12;
												return X11_STEEL_BLUE_2 >>> 8;
											}
											case '3':
											{
												idx += 12;
												return X11_STEEL_BLUE_3 >>> 8;
											}
											case '4':
											{
												idx += 12;
												return X11_STEEL_BLUE_4 >>> 8;
											}
										}
									}
								}
								idx += 10;
								return X11_STEEL_BLUE >>> 8;
							}
						}
						case '_' | 0x20:
						{
							if (!str[6] || strcmp(str[6], !"BLUE", true, 4))
							{
								return -1;
							}
							switch (str[10] | 0x20)
							{
								case ' ':
								{
									if (str[10])
									{
										switch (str[11] | 0x20)
										{
											case '1':
											{
												idx += 12;
												return X11_STEEL_BLUE_1 >>> 8;
											}
											case '2':
											{
												idx += 12;
												return X11_STEEL_BLUE_2 >>> 8;
											}
											case '3':
											{
												idx += 12;
												return X11_STEEL_BLUE_3 >>> 8;
											}
											case '4':
											{
												idx += 12;
												return X11_STEEL_BLUE_4 >>> 8;
											}
										}
									}
								}
								case '_' | 0x20:
								{
									switch (str[11] | 0x20)
									{
										case '1':
										{
											idx += 12;
											return X11_STEEL_BLUE_1 >>> 8;
										}
										case '2':
										{
											idx += 12;
											return X11_STEEL_BLUE_2 >>> 8;
										}
										case '3':
										{
											idx += 12;
											return X11_STEEL_BLUE_3 >>> 8;
										}
										case '4':
										{
											idx += 12;
											return X11_STEEL_BLUE_4 >>> 8;
										}
									}
								}
							}
							idx += 10;
							return X11_STEEL_BLUE >>> 8;
						}
						case 'b':
						{
							if (!str[6] || strcmp(str[6], !"LUE", true, 3))
							{
								return -1;
							}
							switch (str[9] | 0x20)
							{
								case '1':
								{
									idx += 10;
									return X11_STEELBLUE1 >>> 8;
								}
								case '2':
								{
									idx += 10;
									return X11_STEELBLUE2 >>> 8;
								}
								case '3':
								{
									idx += 10;
									return X11_STEELBLUE3 >>> 8;
								}
								case '4':
								{
									idx += 10;
									return X11_STEELBLUE4 >>> 8;
								}
							}
							idx += 9;
							return X11_STEELBLUE >>> 8;
						}
					}
				}
			}
		}
		case 't':
		{
			switch (str[1] | 0x20)
			{
				case 'a':
				{
					if (str[2] != 'N')
					{
						return -1;
					}
					switch (str[3] | 0x20)
					{
						case ' ':
						{
							if (str[3])
							{
								switch (str[4] | 0x20)
								{
									case '1':
									{
										idx += 5;
										return X11_TAN_1 >>> 8;
									}
									case '2':
									{
										idx += 5;
										return X11_TAN_2 >>> 8;
									}
									case '3':
									{
										idx += 5;
										return X11_TAN_3 >>> 8;
									}
									case '4':
									{
										idx += 5;
										return X11_TAN_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[4] | 0x20)
							{
								case '1':
								{
									idx += 5;
									return X11_TAN_1 >>> 8;
								}
								case '2':
								{
									idx += 5;
									return X11_TAN_2 >>> 8;
								}
								case '3':
								{
									idx += 5;
									return X11_TAN_3 >>> 8;
								}
								case '4':
								{
									idx += 5;
									return X11_TAN_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 4;
							return X11_TAN1 >>> 8;
						}
						case '2':
						{
							idx += 4;
							return X11_TAN2 >>> 8;
						}
						case '3':
						{
							idx += 4;
							return X11_TAN3 >>> 8;
						}
						case '4':
						{
							idx += 4;
							return X11_TAN4 >>> 8;
						}
					}
					idx += 3;
					return X11_TAN >>> 8;
				}
				case 'h':
				{
					if (!str[2] || strcmp(str[2], !"ISTLE", true, 5))
					{
						return -1;
					}
					switch (str[7] | 0x20)
					{
						case ' ':
						{
							if (str[7])
							{
								switch (str[8] | 0x20)
								{
									case '1':
									{
										idx += 9;
										return X11_THISTLE_1 >>> 8;
									}
									case '2':
									{
										idx += 9;
										return X11_THISTLE_2 >>> 8;
									}
									case '3':
									{
										idx += 9;
										return X11_THISTLE_3 >>> 8;
									}
									case '4':
									{
										idx += 9;
										return X11_THISTLE_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[8] | 0x20)
							{
								case '1':
								{
									idx += 9;
									return X11_THISTLE_1 >>> 8;
								}
								case '2':
								{
									idx += 9;
									return X11_THISTLE_2 >>> 8;
								}
								case '3':
								{
									idx += 9;
									return X11_THISTLE_3 >>> 8;
								}
								case '4':
								{
									idx += 9;
									return X11_THISTLE_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 8;
							return X11_THISTLE1 >>> 8;
						}
						case '2':
						{
							idx += 8;
							return X11_THISTLE2 >>> 8;
						}
						case '3':
						{
							idx += 8;
							return X11_THISTLE3 >>> 8;
						}
						case '4':
						{
							idx += 8;
							return X11_THISTLE4 >>> 8;
						}
					}
					idx += 7;
					return X11_THISTLE >>> 8;
				}
				case 'o':
				{
					if (!str[2] || strcmp(str[2], !"MATO", true, 4))
					{
						return -1;
					}
					switch (str[6] | 0x20)
					{
						case ' ':
						{
							if (str[6])
							{
								switch (str[7] | 0x20)
								{
									case '1':
									{
										idx += 8;
										return X11_TOMATO_1 >>> 8;
									}
									case '2':
									{
										idx += 8;
										return X11_TOMATO_2 >>> 8;
									}
									case '3':
									{
										idx += 8;
										return X11_TOMATO_3 >>> 8;
									}
									case '4':
									{
										idx += 8;
										return X11_TOMATO_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[7] | 0x20)
							{
								case '1':
								{
									idx += 8;
									return X11_TOMATO_1 >>> 8;
								}
								case '2':
								{
									idx += 8;
									return X11_TOMATO_2 >>> 8;
								}
								case '3':
								{
									idx += 8;
									return X11_TOMATO_3 >>> 8;
								}
								case '4':
								{
									idx += 8;
									return X11_TOMATO_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 7;
							return X11_TOMATO1 >>> 8;
						}
						case '2':
						{
							idx += 7;
							return X11_TOMATO2 >>> 8;
						}
						case '3':
						{
							idx += 7;
							return X11_TOMATO3 >>> 8;
						}
						case '4':
						{
							idx += 7;
							return X11_TOMATO4 >>> 8;
						}
					}
					idx += 6;
					return X11_TOMATO >>> 8;
				}
				case 'u':
				{
					if (!str[2] || strcmp(str[2], !"RQUOISE", true, 7))
					{
						return -1;
					}
					switch (str[9] | 0x20)
					{
						case ' ':
						{
							if (str[9])
							{
								switch (str[10] | 0x20)
								{
									case '1':
									{
										idx += 11;
										return X11_TURQUOISE_1 >>> 8;
									}
									case '2':
									{
										idx += 11;
										return X11_TURQUOISE_2 >>> 8;
									}
									case '3':
									{
										idx += 11;
										return X11_TURQUOISE_3 >>> 8;
									}
									case '4':
									{
										idx += 11;
										return X11_TURQUOISE_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[10] | 0x20)
							{
								case '1':
								{
									idx += 11;
									return X11_TURQUOISE_1 >>> 8;
								}
								case '2':
								{
									idx += 11;
									return X11_TURQUOISE_2 >>> 8;
								}
								case '3':
								{
									idx += 11;
									return X11_TURQUOISE_3 >>> 8;
								}
								case '4':
								{
									idx += 11;
									return X11_TURQUOISE_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 10;
							return X11_TURQUOISE1 >>> 8;
						}
						case '2':
						{
							idx += 10;
							return X11_TURQUOISE2 >>> 8;
						}
						case '3':
						{
							idx += 10;
							return X11_TURQUOISE3 >>> 8;
						}
						case '4':
						{
							idx += 10;
							return X11_TURQUOISE4 >>> 8;
						}
					}
					idx += 9;
					return X11_TURQUOISE >>> 8;
				}
			}
		}
		case 'v':
		{
			if (!str[1] || strcmp(str[1], !"IOLET", true, 5))
			{
				return -1;
			}
			switch (str[6] | 0x20)
			{
				case ' ':
				{
					if (str[6])
					{
						if (!str[7] || strcmp(str[7], !"RED", true, 3))
						{
							return -1;
						}
						switch (str[10] | 0x20)
						{
							case ' ':
							{
								if (str[10])
								{
									switch (str[11] | 0x20)
									{
										case '1':
										{
											idx += 12;
											return X11_VIOLET_RED_1 >>> 8;
										}
										case '2':
										{
											idx += 12;
											return X11_VIOLET_RED_2 >>> 8;
										}
										case '3':
										{
											idx += 12;
											return X11_VIOLET_RED_3 >>> 8;
										}
										case '4':
										{
											idx += 12;
											return X11_VIOLET_RED_4 >>> 8;
										}
									}
								}
							}
							case '_' | 0x20:
							{
								switch (str[11] | 0x20)
								{
									case '1':
									{
										idx += 12;
										return X11_VIOLET_RED_1 >>> 8;
									}
									case '2':
									{
										idx += 12;
										return X11_VIOLET_RED_2 >>> 8;
									}
									case '3':
									{
										idx += 12;
										return X11_VIOLET_RED_3 >>> 8;
									}
									case '4':
									{
										idx += 12;
										return X11_VIOLET_RED_4 >>> 8;
									}
								}
							}
						}
						idx += 10;
						return X11_VIOLET_RED >>> 8;
					}
				}
				case '_' | 0x20:
				{
					if (!str[7] || strcmp(str[7], !"RED", true, 3))
					{
						return -1;
					}
					switch (str[10] | 0x20)
					{
						case ' ':
						{
							if (str[10])
							{
								switch (str[11] | 0x20)
								{
									case '1':
									{
										idx += 12;
										return X11_VIOLET_RED_1 >>> 8;
									}
									case '2':
									{
										idx += 12;
										return X11_VIOLET_RED_2 >>> 8;
									}
									case '3':
									{
										idx += 12;
										return X11_VIOLET_RED_3 >>> 8;
									}
									case '4':
									{
										idx += 12;
										return X11_VIOLET_RED_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[11] | 0x20)
							{
								case '1':
								{
									idx += 12;
									return X11_VIOLET_RED_1 >>> 8;
								}
								case '2':
								{
									idx += 12;
									return X11_VIOLET_RED_2 >>> 8;
								}
								case '3':
								{
									idx += 12;
									return X11_VIOLET_RED_3 >>> 8;
								}
								case '4':
								{
									idx += 12;
									return X11_VIOLET_RED_4 >>> 8;
								}
							}
						}
					}
					idx += 10;
					return X11_VIOLET_RED >>> 8;
				}
				case 'r':
				{
					if (!str[7] || strcmp(str[7], !"ED", true, 2))
					{
						return -1;
					}
					switch (str[9] | 0x20)
					{
						case '1':
						{
							idx += 10;
							return X11_VIOLETRED1 >>> 8;
						}
						case '2':
						{
							idx += 10;
							return X11_VIOLETRED2 >>> 8;
						}
						case '3':
						{
							idx += 10;
							return X11_VIOLETRED3 >>> 8;
						}
						case '4':
						{
							idx += 10;
							return X11_VIOLETRED4 >>> 8;
						}
					}
					idx += 9;
					return X11_VIOLETRED >>> 8;
				}
			}
			idx += 6;
			return X11_VIOLET >>> 8;
		}
		case 'w':
		{
			if (str[1] != 'H')
			{
				return -1;
			}
			switch (str[2] | 0x20)
			{
				case 'e':
				{
					if (!str[3] || strcmp(str[3], !"AT", true, 2))
					{
						return -1;
					}
					switch (str[5] | 0x20)
					{
						case ' ':
						{
							if (str[5])
							{
								switch (str[6] | 0x20)
								{
									case '1':
									{
										idx += 7;
										return X11_WHEAT_1 >>> 8;
									}
									case '2':
									{
										idx += 7;
										return X11_WHEAT_2 >>> 8;
									}
									case '3':
									{
										idx += 7;
										return X11_WHEAT_3 >>> 8;
									}
									case '4':
									{
										idx += 7;
										return X11_WHEAT_4 >>> 8;
									}
								}
							}
						}
						case '_' | 0x20:
						{
							switch (str[6] | 0x20)
							{
								case '1':
								{
									idx += 7;
									return X11_WHEAT_1 >>> 8;
								}
								case '2':
								{
									idx += 7;
									return X11_WHEAT_2 >>> 8;
								}
								case '3':
								{
									idx += 7;
									return X11_WHEAT_3 >>> 8;
								}
								case '4':
								{
									idx += 7;
									return X11_WHEAT_4 >>> 8;
								}
							}
						}
						case '1':
						{
							idx += 6;
							return X11_WHEAT1 >>> 8;
						}
						case '2':
						{
							idx += 6;
							return X11_WHEAT2 >>> 8;
						}
						case '3':
						{
							idx += 6;
							return X11_WHEAT3 >>> 8;
						}
						case '4':
						{
							idx += 6;
							return X11_WHEAT4 >>> 8;
						}
					}
					idx += 5;
					return X11_WHEAT >>> 8;
				}
				case 'i':
				{
					if (!str[3] || strcmp(str[3], !"TE", true, 2))
					{
						return -1;
					}
					switch (str[5] | 0x20)
					{
						case ' ':
						{
							if (str[5])
							{
								if (str[6] && !strcmp(str[6], !"SMOKE", true, 5))
								{
									idx += 11;
									return X11_WHITE_SMOKE >>> 8;
								}
							}
						}
						case '_' | 0x20:
						{
							if (str[6] && !strcmp(str[6], !"SMOKE", true, 5))
							{
								idx += 11;
								return X11_WHITE_SMOKE >>> 8;
							}
						}
						case 's':
						{
							if (str[6] && !strcmp(str[6], !"MOKE", true, 4))
							{
								idx += 10;
								return X11_WHITESMOKE >>> 8;
							}
						}
					}
					idx += 5;
					return X11_WHITE >>> 8;
				}
			}
		}
		case 'y':
		{
			if (!str[1] || strcmp(str[1], !"ELLOW", true, 5))
			{
				return -1;
			}
			switch (str[6] | 0x20)
			{
				case ' ':
				{
					if (str[6])
					{
						switch (str[7] | 0x20)
						{
							case '1':
							{
								idx += 8;
								return X11_YELLOW_1 >>> 8;
							}
							case '2':
							{
								idx += 8;
								return X11_YELLOW_2 >>> 8;
							}
							case '3':
							{
								idx += 8;
								return X11_YELLOW_3 >>> 8;
							}
							case '4':
							{
								idx += 8;
								return X11_YELLOW_4 >>> 8;
							}
							case 'g':
							{
								if (str[8] && !strcmp(str[8], !"REEN", true, 4))
								{
									idx += 12;
									return X11_YELLOW_GREEN >>> 8;
								}
							}
						}
					}
				}
				case '_' | 0x20:
				{
					switch (str[7] | 0x20)
					{
						case '1':
						{
							idx += 8;
							return X11_YELLOW_1 >>> 8;
						}
						case '2':
						{
							idx += 8;
							return X11_YELLOW_2 >>> 8;
						}
						case '3':
						{
							idx += 8;
							return X11_YELLOW_3 >>> 8;
						}
						case '4':
						{
							idx += 8;
							return X11_YELLOW_4 >>> 8;
						}
						case 'g':
						{
							if (str[8] && !strcmp(str[8], !"REEN", true, 4))
							{
								idx += 12;
								return X11_YELLOW_GREEN >>> 8;
							}
						}
					}
				}
				case '1':
				{
					idx += 7;
					return X11_YELLOW1 >>> 8;
				}
				case '2':
				{
					idx += 7;
					return X11_YELLOW2 >>> 8;
				}
				case '3':
				{
					idx += 7;
					return X11_YELLOW3 >>> 8;
				}
				case '4':
				{
					idx += 7;
					return X11_YELLOW4 >>> 8;
				}
				case 'g':
				{
					if (str[7] && !strcmp(str[7], !"REEN", true, 4))
					{
						idx += 11;
						return X11_YELLOWGREEN >>> 8;
					}
				}
			}
			idx += 6;
			return X11_YELLOW >>> 8;
		}
	}
	return -1;
}
