// List of possible device names for Bluefog
int dev_max = 1554; // 4 less than "wc -l devicenames.h"
char * device_name[] = {
"Apple iPhone 3GS",
"Apple iPhone 4",
"Apple iPhone 4S",
"BlackBerry Bold 9900",
"BlackBerry Curve 3G", 
"BlackBerry Curve 9350",
"BlackBerry Pearl 3G",
"BlackBerry Porche Design P'9981",
"BlackBerry Torch 9800",
"HTC Desire",
"HTC Desire HD",
"HTC Droid Incredible 2",
"HTC Evo 3D",
"HTC Evo Design 4G",
"HTC Hero",
"HTC Inspire 4G",
"HTC Merge",
"HTC One S",
"HTC One V",
"HTC One X",
"HTC Ozone",
"HTC Rezound",
"HTC Rhyme",
"HTC Sensation",
"HTC Status",
"HTC T-Mobile G2 Touch",
"HTC T-Mobile myTouch 4G",
"HTC T-Mobile myTouch 4G Slide",
"HTC Tattoo",
"HTC Touch Cruise",
"HTC Wildfire",
"LG Banter",
"LG Banter Touch",
"LG Chocolate Touch",
"LG Cosmos",
"LG Cosmos Touch",
"LG Muzq",
"LG myTouch Q",
"LG Optimus 4X HD",
"LG Optimus 3D Cube",
"LG Optimus 3D Max",
"LG Optimus One",
"LG Optimus 2",
"LG Optimus Slider",
"LG Optimus S",
"LG Optimus M",
"LG Optimus T",
"LG Optimus Vu",
"LG dLite",
"LG Rumor Touch",
"LG Wine 2",
"Motorola Bali",
"Motorola Brute",
"Motorola Droid 2 Global",
"Motorola Droid 3",
"Motorola Droid 4",
"Motorola Droid Bionic",
"Motorola Droid Pro",
"Motorola Droid RAZR",
"Motorola Droid RAZR Maxx",
"Motorola Droid X2",
"Motorola Electrify",
"Motorola Milestone X",
"Motorola Photon 4G",
"Motorola Triumph",
"Motorola XPRT",
"Samsung t359",
"Samsung Admire",
"Samsung Captivate",
"Samsung Captivate Glide",
"Samsung Character",
"Samsung Conquer 4G",
"Samsung Epic 4G",
"Samsung Eternity II",
"Samsung Fascinate",
"Samsung Flight II",
"Samsung Illusion",
"Samsung Indulge",
"Samsung Intensity",
"Samsung Galaxy Ace 2",
"Samsung Galaxy Attain 4G",
"Samsung Galaxy Beam",
"Samsung Galaxy Indulge",
"Samsung Galaxy mini",
"Samsung Galaxy mini 2",
"Samsung Galaxy Nexus",
"Samsung Galaxy Note",
"Samsung Galaxy Precedent",
"Samsung Galaxy Prevail",
"Samsung Galaxy S",
"Samsung Galaxy S Advance",
"Samsung Galaxy S Aviator",
"Samsung Galaxy S Blaze 4G",
"Samsung Galaxy S Beam",
"Samsung Galaxy S II",
"Samsung Galaxy S II Skyrocket",
"Samsung Galaxy S II Skyrocket HD",
"Samsung Galaxy S Plus",
"Samsung Galaxy Y Pro",
"Samsung Stratosphere",
"Samsung Gravity Smart",
"Samsung Gusto",
"Samsung Mezmerize",
"Samsung Reality",
"Samsung Replenish",
"Samsung Repp",
"Samsung Smiley",
"Samsung Suede",
"Samsung Transform Ultra",
"Samsung Vitality",
"002226-IM",
"220Plantronics",
"29326-ITS-MBPspare",
"2sexy",
"2XXplantronics ",
"320 Plantronics",
"590Plantronics",
"7AKSA06369",
"825.BankGirl !",
"85076",
"8D nickki ",
"9",
"a0-0",
"A200",
"A20000",
"A4l",
"Abhijit",
"A.bieber <3",
"ABS SOUNDS",
"Ada",
"administrator's Mac mini",
"Adrielle leighn",
"Adro_kid!",
"AHOLBROOK",
"ALa's iPod",
"Alex",
"Alex's Bold",
"Alex's iPod",
"al gian",
"Alisha",
"Alonzo or butter",
"ALPINE BT Box",
"ALPINE CDE-103BT",
"ALPINE KCE-250BT",
"Alpine KCE-350BT",
"Amanda <3",
"Amelia",
"Amira",
"Anchorage",
"Andrea<3",
"Anju",
"ANP331",
"apple's MacBook Pro",
"Apple's Mac Pro",
"appleâs mouse",
"Apvd BlackBerry 9700",
"ARCH3",
"ARD TaskMaster",
"ars116.02",
"ars116.04",
"ars116.54",
"ars273.66 MacBook Air Personal Setup East",
"ars411.05 MacBook Pro Mac Wall 2",
"ars411.12 MacBook Air Centre Table 2",
"ars411.31 MacBook Air Centre Table 3",
"ars411.35 MacBook Air Centre Table 1",
"ars411.64 MacBook Pro Creative North",
"ARYF23XJDLH",
"Atbt ",
"ATC-125",
"ats-171",
"Audi MMI 0285",
"Audi MMI 1093",
"Audi MMI 1998",
"Audi MMI 2774",
"Audi MMI 2913",
"Audi MMI 3615",
"Audi MMI 4709",
"Audi MMI 4946",
"Audi MMI 6817",
"Audi MMI 9297",
"Audi UHV 1685",
"Audi UHV 2896",
"Audi UHV 3770",
"Audi UHV 3854",
"Audi UHV 4876",
"Audi UHV 5006",
"Audi UHV 5445",
"Audi UHV 6572",
"Audi UHV 7268",
"Audi UHV 8610",
"Audi UHV 8914",
"Austin",
"AVH-P3200BT",
"AVH-P3300BT",
"AVH-P5200BT",
"Avii",
"AwareOffice Computer",
"Azz kiker",
"B2100",
"B3410R",
"B5722",
"Babe",
"Baby Girl",
"Babyy_Gurl",
"bahari boi",
"Barakat Khan",
"Basil",
"BASShead",
"BB9800",
"BB Bold",
"BBY00155M004",
"BCM2045",
"BDD",
"Beauty",
"Bec",
"Belkin M50",
"Bhagat Gps",
"BigBadKrem",
"Big CJ Day!!!",
"BIG DADDY",
"Big Man John",
"Big T",
"Big_Wally",
"Bills BlackBerry 9700",
"BK's MacBook",
"Black",
"Black barbie.!",
"BlackBerry 7130e",
"BlackBerry 8100",
"BlackBerry 8110",
"BlackBerry 8130",
"BlackBerry 8130m",
"BlackBerry 8220",
"BlackBerry 8300",
"BlackBerry 8310",
"BlackBerry 8320",
"BlackBerry 8330",
"BlackBerry 8330 matt kadak",
"BlackBerry 8520",
"BlackBerry 8520 rj",
"Blackberry 8530",
"BlackBerry 8530",
"BlackBerry 8703e",
"BlackBerry 8800",
"BlackBerry 8820",
"BlackBerry 8900",
"BlackBerry 9300",
"BlackBerry 9330",
"BlackBerry 9360",
"BlackBerry 9530",
"BlackBerry 9650",
"BlackBerry 9670",
"Blackberry 9700",
"BlackBerry 9700",
"BlackBerry 9780",
"BlackBerry 9790",
"BlackBerry 9800",
"BlackBerry 9810",
"BlackBerry 9860",
"BlackBerry 9900",
"BlackBerry Brock",
"BlackBerry Cox",
"Blackberry DKoens",
"BlackBerry Jon",
"BlackBerry ops sup",
"BlackBerry zoe blackie",
"BlackCat",
"BLACK_LAVENDER",
"BLAcK@YeLLOw",
"Blast",
"B love",
"Blueaction",
"BlueAnt",
"BlueAnt ST3",
"Bluetooth Combo Printer Adapter - 4E36",
"Bluetooth Modem",
"BLU Logic 1011",
"BLU Logic 1111",
"BLU Logic 1211",
"BLU Logic 1311",
"BMW06106",
"BMW11591",
"BMW14282",
"BMW23606",
"BMW39329",
"BMW41492",
"BMW51193",
"BMW52303",
"BMW84649",
"BMW 92156",
"Boi khuu Nokia 6790",
"Brahyiene",
"Bran9780",
"Brandon ",
"Brea",
"BRIA*BABE:)",
"Britts phone",
"Brp_nokia",
"Bryan`s Boost",
"Bt2080",
"BTGPS",
"BTORB1",
"BURNS",
"butterpecan <3",
"C3-00",
"C3053",
"C3b",
"C520",
"C530",
"C610",
"C790",
"C810",
"C905",
"Cameron",
"campusnet's MacBook Pro",
"CandyX :)",
"Car08f",
"CAR KIT",
"Carlos",
"CARLOS O.",
"Carrie's Phone",
"Carr's phone",
"Cassandra",
"Cathy",
"CAUSSOVA",
"CCICTB2056V",
"ccmchat",
"C-diva 2011 ",
"chaela",
"changemeasap",
"Charlotte",
"chepito",
"cherry Q8",
"CHRIS HUNTER's iPhone",
"Christinee(:",
"CI-5IKYA61431E1",
"Cid",
"CILS Dual Clone",
"CLC's Blackberry",
"cnu941czxw",
"CO2CE903C5K0",
"Coco",
"Communication Checkout's 4H5090WJRJ7",
"conference ",
"CR-48",
"Craven",
"crys",
"csbn",
"csquare",
"CSR - bc4",
"cuteeee.",
"Cute like always XD alyssa baby",
"cute wife",
"D144LTJ1",
"D185KYJ1",
"D42X3J71",
"D98SVKC1",
"Dad",
"Daddys Little Girl",
"Dad's Phone",
"Danica Doucette-Previlleâs iPad",
"Daniel Gwernga",
"dasha moses",
"Dave's iPhone",
"dBlackBerry 9800",
"DC171YG1",
"*-deb:-)",
"Debbie ",
"Debbie's Curve",
"DEBE",
"Debug GO 910",
"DEH-P6200BT ",
"DEIDRES PHONE",
"dellas bb",
"Dell Wireless 365 Bluetooth Module",
"Dell Wireless 370 Bluetooth Mini-card",
"Denise",
"Desi",
"deskjet 995c S/N MY39J0B130A4",
"DESKTOP-PC",
"Dj gurden",
"Donato Marable's iMac",
"Donovon .",
"Dopemans wife",
"DORO410TOMB",
"dragonFX",
"Dre's iPhone",
"Drizzy bby",
"Droid",
"DS-Server",
"DTVBluetooth",
"ducky",
"Earpiece",
"Earthmate BT-20 GPS",
"Edilsar   ",
"Elise Kristina's iPhone",
"Ellen's BlackBerry",
"El roly",
"El tok",
"Em228",
"EM228",
"Emilie",
"ENASH8-PC",
"Erin",
"experience's iMac",
"Experience's MacBook",
"experience's MacBook Air",
"Fatboy",
"FAT LADY GOOSHMA!!!!",
"Fats",
"FDI_USER-PC",
"FDI_User's MacBook Pro",
"Female shooter",
"ferna 9800",
"Ff9065",
"Fizzing Whisbee",
"Flo flo's",
"Ford Audio",
"FP-FAC83897",
"Frank",
"Frey",
"Frost",
"frs",
"Fuzzyslipers",
"Gallagher",
"GAOYU-PC",
"GB13-5",
"GBOL-L3AGW5V",
"GB-WHAMILTON430",
"Genius Room 1",
"Genius Room 2",
"Genius Room 3",
"Genius Room 5",
"Genius Room Admin",
"Ger's GPS",
"GIZMO-PC",
"Gordis",
"GPS",
"Grace",
"Gracie m",
"grams",
"GRANT-T400",
"Grover",
"Gskootxx12",
"GT-B5310R",
"GT-M8910",
"GT-S5233W",
"GTX75",
"guatemala",
"Gumstix",
"H2CE94100Z8",
"H500",
"H710",
"HandsFreeLink TM",
"Harriet's iPhone, her bffl.",
"HC700",
"HDLT02",
"HDLT11",
"Hecate",
"HERO200",
"hfac3000",
"Hilu1",
"hokiebook",
"HOLUX_M-1000",
"Homewreck0r",
"Hope",
"Hotboi",
"hpnetbook",
"HPPAVILIONG6-IC",
"hs3.local",
"hs4.local",
"hs-Mac",
"HTC38",
"HTC70",
"HTC_HD2",
"HTC-ST7377",
"HUAWEI M228",
"Huawei M735",
"HUAWEI MOBILE",
"Huawei U7519",
"Hufflepuff",
"Hugo",
"Hunter",
"HW M750",
"hydepark",
"Hypnotick",
"iAMacBookPro",
"IBM-C81B690D3D0",
"Icey",
"iHW M750yfh ",
"*I.LoVe.My.Boo*",
" ilovetara :) <3",
"iMac 24",
"INC-L-RSM001",
"Innuendo",
"INQ Chat 3G",
"iPhone",
"iPhone3GS",
"iPhone 3GS Window Display",
"=]]Iree<3",
"ITM's MacBook Pro",
"ITSPECIALIST",
"I watch u while u sleep x)im gonna get u soon x__x",
"J105i",
"Jabra BT2080",
"Jabra EASYGO",
"Jabra VBT",
"jackis blackbaby",
"Jaguar",
"Jai ho",
"jan",
"Â§JanayÂ§",
"JANELMONET",
"Janet e freenman",
"Jan's phone",
"Jasi",
"Jasmine",
"jawbone",
"Jawbone",
"Jay",
"Jaz",
"Jazzybaby",
"jes",
"Jesus Loves",
"Jim BlackBerry",
"JLC's iPhone",
"Jnp",
"Joe BlackBerry 9700",
"Jonathan P7000",
"Jose Antonio's Communicator",
"Josh GPS",
"jph 9300",
"jps.nokia.6103",
"JR",
"JUAN   CUA",
"Juicy",
"Jujubee",
"JVC Unit",
"JVC UNIT",
"JX20",
"K550i",
"K850i",
"Kalilou's Sprint",
"Katushca Nokia 6300",
"KD-AVX40",
"kEc",
"keegz crackberry",
"KELLY HICKEN",
"Kelsey Kerr's MacBook",
"Kenneth Southern",
"KENWOOD BT CD/R-3P1",
"KENWOOD BT CD/R-4P1",
"Khy boogie",
"kia",
"KiD CuDi",
"Kimmie Robbins",
"King",
"king chow's iMac",
"kissesbabe",
"KIY.",
"Klein",
"Kpunk",
"ks9412",
"Kwame1",
"KWC-M1400",
"KWC-M2000",
"KWC-S2300",
"KY13 FR3$#",
"Kyocera",
"Kyocera Wireless Corp.",
"Laddy",
"LADIESMAN 40",
"Ladiibug",
"Â¤lADY STACkZ. !Â¤",
"lalita",
"Land Rover",
"LAP-LYN",
"LAPPIE",
"LAPTOP",
"Lazorko igor",
"LEAGALIZE CANNIBAS 2.0",
"Lee",
"len Nuvi",
"LENOVO-AE98792C",
"LENOVO-B9B16E97",
"leonas cell BlackBerry 9700",
"*Leslie*",
"lester",
"LG ",
"LG 420G",
"LG-A133CH",
"LG BL40g",
"LG CE110",
"LG CF360",
"LG CU400",
"LG CU575",
"LG CU920",
"LG GB250",
"LG GB255g",
"LG GD510",
"LG GD570",
"LG GM200",
"LG GR500FD",
"LG GR501",
"LG GR700",
"LG GS170",
"LG GS290",
"LG GS390",
"LG GS500gX",
"LG GS505",
"LG GT350",
"LG GT550",
"LG GU295",
"LG GU297",
"LG GW300",
"LG GW370",
"LG GW525g",
"LG GW525gX",
"LG HBM-210",
"LG HBM-230",
"LG HBM-750",
"LG KC550 ",
"LG KE970",
"LG KF350",
"LG KM555R",
"LG KP500",
"LG KS360",
"LG LOTUS ELITE",
"LG LX160",
"LG LX165",
"LG MUZIQ",
"LG Remarq",
"LG RUM",
"LG RUMOR1",
"Lg rumor 2",
"LG RUMOR2 B",
"LG RUMORD",
"LG RUMOR TOUCH",
"LG RUMOR TOUCHyadi",
"LG RUMOUR",
"LG Rumour 2",
"LG TE365",
"LG VX5600",
"LIFEBOOK",
"LIFEBOOKISE",
"LIFEBOOKPOOL2",
"Lil jr26",
"Lilly2159109144",
"LIN",
"Linda",
"link",
"Lisa's iPhone",
"Lisaxx",
"LLE",
"Logical-One",
"lorie bb",
"Louis Clark",
"Lsmagj",
"LT016789",
"LT016794",
"$(Luckeybaby)$",
"Lukes ",
"Lux",
"M500",
"M860",
"M860clbsr",
"MacBook1",
"Maddie (:",
"Magellan RoadMate",
"Magneto",
"mahalq0h",
"Mando",
"Manny",
"Mariaâs iPhone",
"MB Bluetooth",
"McLane_DDH_MF4Te",
"Mdgtto52",
"mediamac1",
"Media Studies's iMac",
"Megan (:",
"Menchie =)",
"MezLab (95)",
"MH07959",
"MH25470",
"mia",
"Michael",
"Michi",
"MickEY",
"Miguel",
"MILAN'S PHONE",
"MILKCARTON",
"Mina",
"MiniBeast",
"Mink",
"MIP360 Bluetooth Printer Adapter",
"Mirro",
"mkdsnj",
"mobile1",
"moby",
"modsiw's iPhone",
"MoLap",
"Mom LG CU575 ",
"Monique",
"Mo's Maddness",
"Mother",
"MOTONAV TN500",
"Motorola D650",
"Motorola H270",
"Motorola h350",
"Motorola H371",
"Motorola h390",
"Motorola H390",
"Motorola H555",
"Motorola h700",
"Motorola H700",
"motorola h720",
"motorola hk200",
"Motorola Q",
"Motorola Q9c",
"Motorola Q9m",
"Motorola Roadster",
"Motorola S805",
"Motorola T325",
"Motorola V3i",
"motorolla",
"Motorrola",
"MP20706",
"MP24924",
"M@R!A",
"Mrs. Beautiful",
"Mrs. JLGreen",
"Ms. Go Getta",
"Ms Sonn",
"MTKBTDEVICE",
"MVH-P8200BT",
"My Car",
"MyHeadset",
"MY-PC",
"My Q9m",
"My Sony Shit",
"Mysto",
"Mz.blast",
"mz.br3",
"Namekuceyn",
"Nasia",
"NAVIGON",
"nav-u",
"NCC 1701A",
"Nee Nee",
"Nellz",
"Nerd;-)",
"NESSOJI",
"Net phone bluetooth",
"Nichole",
"Nick Joyce :)",
"Nikki Incognito",
"NJCHQLAPA08963",
"NJMLLPANXP347",
"Nkb",
"NMA's Mac",
"Noha",
"Nokia",
"Nokia 1006",
"Nokia 2660",
"Nokia 2680s-2b",
"Nokia 2720a-2b",
"Nokia 2730 classic",
"Nokia 276j",
"Nokia 2865i",
"Nokia 3250",
"Nokia 3710 fold",
"Nokia 3711 fold",
"Nokia 5230",
"Nokia 5230-1c",
"Nokia 5230hi you",
"Nokia 5300",
"Nokia 5800 XpressMusic",
"Nokia 608",
"Nokia 6085",
"Nokia 6086",
"Nokia 6102i",
"Nokia 6126",
"Nokia 6133",
"Nokia 6230",
"Nokia 6263",
"NOKIA6300",
"Nokia 6303 classic",
"Nokia 6350-1d",
"Nokia 6600",
"Nokia 6750-1c",
"Nokia 7020",
"Nokia 7230",
"Nokia 7510a-b",
"Nokia 7610 Supernova",
"Nokia C5-04",
"Nokia C6-00",
"Nokia E5-00.2",
"Nokia E72-2",
"Nokia E73",
"Nokia E75",
"Nokia N81",
"Nokia N900",
"Nokia N97",
"Nokia N97 mini",
"Nokia X3-00",
"Noliamare",
"NOTABLE",
"novero TheTalkyOne",
"Nugget",
"nuvi",
"nuvi 1390",
"nuvi 265 Napoli",
"nuvi 2x5 #3504520369",
"nuvi 2x5 #3509870435",
"nuvi 2x5 #3515030612",
"nuvi 2x5 #3515120490",
"nuvi 2x5 #3519753067",
"nuvi 2x5 #3520651659",
"nuvi 2x5 #3522051771",
"nuvi 2x5 #3523212728",
"nuvi 2x5 #3523391517",
"nuvi 2x5 #3524901183",
"nuvi 2x5 #3525732258",
"nuvi 2x5 #3526092836",
"nuvi 2x5 #3528220615",
"nuvi 2x5 #3537410305",
"nuvi 2x5 #3537490390",
"nuvi 2x5 #3537510115",
"nuvi 2x5 #3540942901",
"nuvi 2x5 #3547991294",
"nuvi 2x5 #3550532896",
"nuvi 2x5 #3550533305",
"nuvi 2x5 #3550630323",
"nuvi 2x5 #3551090165",
"nuvi 2x5 #3559180780",
"nuvi 2x5 #3564900212",
"nuvi 2x5 #3565550334",
"nuvi 2x5 #3565710574",
"nuvi 2x5 #3565711844",
"nuvi 2x5 #3573680136",
"nuvi 2x5 #3581060829",
"nuvi 2x5 #3581131883",
"nuvi 2x5 #3582400936",
"nuvi 2x5 #3583461081",
"nuvi 2x5 #3583860048",
"nuvi 2x5 #3583921583",
"nuvi 2x5 #3583950696",
"nuvi 2x5 #3583971994",
"nuvi 2x5 #3588921709",
"nuvi 2x5 #3599642920",
"nuvi 2x5 #3603161243",
"nuvi 2x5 #3607440350",
"nuvi 2x5 #3608782289",
"nuvi 2x5 #3608800012",
"nuvi 2x5 #3625550049",
"nuvi 2x5 #3628640190",
"nuvi 2x5 #3632480064",
"nuvi 2x5 #3634821096",
"nuvi 2x5 #3639721960",
"nuvi 2x5 #3639940888",
"nuvi 2x5 #3642031213",
"nuvi 2x5 #3643341343",
"nuvi 2x5 #3643771398",
"nuvi 2x5 #3643771992",
"nuvi 2x5 #3647310117",
"nuvi 2x5 #3651182575",
"nuvi 2x5 #3654971895",
"nuvi 2x5 #3657852150",
"nuvi 2x5 #3658832110",
"nuvi 2x5 #3668030851",
"nuvi 2x5 #3668202656",
"nuvi 2x5 #3671601614",
"nuvi 2x5 #3671611057",
"nuvi 2x5 #3671620716",
"nuvi 2x5 #3671622990",
"nuvi 2x5 #3676510567 ",
"nuvi 2x5 #3676561922",
"nuvi 2x5 #3681680391",
"nuvi 2x5 #3694070314",
"nuvi 2x5 #36941120501234lgcf360",
"nuvi 2x5 #3697702518",
"nuvi 2x5 #3697981947",
"nuvi 2x5 #3698011350",
"nuvi 2x5 #3699102185",
"nuvi 2x5 #3704141778",
"nuvi 2x5 #3704420055",
"nuvi 2x5 #3704462025",
"nuvi 2x5 #3708490746",
"nuvi 2x5 #3708492650",
"nuvi 2x5 #3708551228",
"nuvi 2x5 #3708562323",
"nuvi 2x5 #3714491679",
"nuvi 2x5 #3714560328",
"nuvi 2x5 #3714592931",
"nuvi 2x5 #3714631143",
"nuvi 2x5 #3716050094",
"nuvi 2x5 #3719570342",
"nuvi 2x5 #3719590193",
"nuvi 2x5 #3719622180",
"nuvi 2x5 #3730360772",
"nuvi 2x5 #3730362490",
"nuvi 2x5 #3734400941",
"nuvi 2x5 #3737411924",
"nuvi 2x5 #3740001069",
"nuvi 2x5 #3740480158",
"nuvi 2x5 #3740501578",
"nuvi 2x5 #3744470803",
"nuvi 2x5 #3745340870",
"nuvi 2x5 #3745342159",
"nuvi 2x5 #3745380215",
"nuvi 2x5 #3745480071",
"nuvi 2x5 #3745612456",
"nuvi 2x5 #3745612651",
"nuvi 2x5 #3752892169",
"nuvi 2x5 #3755880520",
"nuvi 2x5 #3755970164",
"nuvi 2x5 #3762100697",
"nuvi 2x5 #3777852795",
"nuvi 2x5 #3802663798",
"nuvi 2x5 #3804980218",
"nuvi 2x5 #3808447435",
"nuvi 2x5 #38086577721",
"nuvi 2x5 #3808658386",
"nuvi 2x5 #3811011961",
"nuvi 2x5 #3811519449",
"nuvi 2x5 #3811762386",
"nuvi 2x5 #3811967441",
"nuvi 2x5 #3813397361",
"nuvi 2x5 #3813398895",
"nuvi 2x5 #3813779187",
"nuvi 2x5 #3813831046",
"nuvi 2x5 #3814232850",
"nuvi 2x5 #3814730926",
"nuvi 2x5 #3814871825",
"nuvi 2x5 #3815431517",
"nuvi 2x5 #3815537499",
"nuvi 2x5 #3815537796",
"nuvi 2x5 #3816871854",
"nuvi 2x5 #3817498450",
"nuvi #3252821346",
"nuvi #3332161811",
"nuvi #3333070370",
"nuvi #3335731342",
"nuvi #3338471466",
"nuvi #3339102130",
"nuvi #3350151965",
"nuvi #3355580795",
"nuvi #3371760342",
"nuvi #3376832457",
"nuvi #3384230585",
"nuvi #3392340734",
"nuvi #3392742781",
"nuvi #3396830537",
"nuvi #3400596990",
"nuvi #3400611323",
"nuvi #3404674809",
"nuvi #3413141911",
"nuvi #3453281591",
"nuvi #3465160765",
"nuvi #3469021253",
"nuvi #3469040947",
"nuvi #3478971829",
"nuvi #3483140133",
"nuvi #3486570755",
"nuvi #3599681208",
"nuvi #3599682001",
"nuvi #3608280190",
"nuvi #3608280718",
"nuvi #3612491621",
"nuvi #3617153202",
"nuvi #3624840308",
"nuvi #3624841336",
"nuvi #3624841978",
"nuvi #3624842757",
"nuvi #3624850876",
"nuvi #3632641176",
"nuvi #3639980529",
"nuvi #3648631209",
"nuvi #3648640369",
"nuvi #3658882788",
"nuvi #3663270480",
"nuvi #3666460280",
"nuvi #3666460600",
"nuvi #3675631165",
"nuvi #3675631484",
"nuvi #3678620780",
"nuvi #3681441542",
"nuvi #3683180296",
"nuvi #3684240091",
"nuvi #3684411150",
"nuvi #3691502128",
"nuvi #3693341226",
"nuvi #3693400514",
"nuvi #3703282277",
"nuvi #3708600904",
"nuvi #3714660508",
"nuvi #3723703137",
"nuvi #3737541891",
"nuvi #3756251465",
"nuvi #3766200129",
"nuvi #3800159708",
"nuvi #3801212688",
"nuvi #3801370675",
"nuvi #3802314511",
"nuvi #3802924733",
"nuvi #3803478482",
"nuvi #3803481158",
"nuvi #3803848916",
"nuvi #3804469603",
"nuvi #3806736490",
"nuvi #3806737639",
"nuvi #3807471696",
"nuvi #3807605817",
"nuvi #3808169576",
"nuvi #3808596182",
"nuvi #3809483001",
"nuvi #3809691187",
"nuvi #3809802990",
"nuvi #3809804152",
"nuvi #3809806189",
"nuvi #3810783028",
"nuvi #3810783199",
"nuvi #3810785724",
"nuvi #3811033344",
"nuvi #3811808378",
"nuvi #3814125158",
"nuvi #3814214509",
"nuvi #3814343958",
"nuvi #3814382891",
"nuvi #3814504333",
"nuvi #3815080424",
"nuvi #3815383771",
"nuvi #3815878568",
"nuvi #3816233405",
"nuvi #3816893948",
"nuvi #3816923695",
"nuvi #3818150956",
"nuvi #3818157329",
"nuvi #3819178492",
"nuvi #3819321130",
"nuvi #3819530746",
"nuvi 7 #3377220774",
"nuvi 7 #3378411174",
"nuvi 7 #3383130521",
"nuvi 7 #3383391563",
"nuvi 7 #3386010805",
"nuvi 7 #3390291394",
"nuvi 7 #3393391716",
"nuvi 7 #3398481247",
"nuvi 7 #3398482738",
"nuvi 7 #3400020778",
"nuvi 7 #3402620294",
"nuvi 7 #3402682960",
"nuvi 7 #3402682975",
"nuvi 7 #3403790153",
"nuvi 7 #3407911360",
"nuvi 7 #3410451017",
"nuvi 7 #3410451231",
"nuvi 7 #3468760852",
"nuvi 7 #3476461234",
"nuvi 7 #3480720771",
"nuvi 7 #3490520029",
"nuvi 7 #3494110250",
"nuvi 7 #3508152910",
"nuvi 7 #3511321987",
"nuvi 7 #3517090818",
"nuvi 7 #3517201513",
"nuvi 7 #3522790581",
"nuvi 7 #3524681673",
"nuvi 7 #3525281100",
"nuvi 7 #3554940710",
"nuvi 7 #3560461619",
"nuvi 7 #3583431588",
"nuvi 765 #3608021502",
"nuvi 765 #3651560934",
"nuvi 765 #3672700831",
"nuvi 765 #3681381097",
"nuvi 765 #3688870400",
"nuvi 765 #3733640101",
"nuvi 765 #3758911208",
"nuvi 7x5 #3526810948",
"nüvi 765 #3644181812",
"nüvi 765 #3672710379",
"nüvi 765 #3698360202",
"nüvi 785 #3672580288",
"nüvi 785 #3708711980",
"NX500",
"obra",
"Officejet Pro 8500 A909g",
"OFFICEWOLF",
"OLD",
"Omar's BlackBerry",
"%.onlyyoneeforme.%",
"OTHER.chem.OTHER.edu",
"OTHER.math.OTHER.edu",
"ourdon",
"OWNER-PC",
"P1-068666",
"P1-0B9289",
"P1i4691HP.jJvyg 6nK7lo",
"P2000",
"P2000audrey",
"P2020",
"P7040",
"P7040plantronics",
"PA04818",
"Palm Device",
"palmOne Device",
"Pam joyce",
"Pam phone",
"Papaseancy",
"PARKE_PC",
"Parrot MKi9100",
"Parrot v5.23C",
"paulsbb",
"PB42-00721023145",
"PB42-02110914257",
"PB42-06410714463",
"PB42-23810514164",
"PB42-25810614290",
"PB42-25910514131",
"PB42-26020923044",
"PB42-26020923235",
"PB42-26020923305",
"PB42-34520923072",
"pb_iPhone",
"PC229962744102",
"PC869142591297",
"PCCND819BXT2",
"PD-071",
"PD-0908",
"Pdub",
"PENTAX PocketJet",
"Pepper",
"Peter phone",
"PG07563",
"philly tech",
"Photosmart C309a series",
"Photosmart C5500 series",
"Photosmart C7100 series",
"Photosmart Premium C309g-m",
"Photosmart Prem-Web C309n-s",
"PictureKiosk",
"Pioneer BT unit",
"Pioneer Navi",
"PK80-4941626",
"PLACE-COMP",
"PLACE's MacBook Pro",
"plankton",
"plantronics",
"Plantronics",
"PLANTRONICS",
"Plantronics Discovery 925",
"Plt. 510.",
"poBlackBerry 8330",
"Pocket_PC",
"Polkadotinfinity.DejahKiara",
"Poppa hill",
"Porkchop",
"Premium Construction Inc.",
"presenter",
"PRETTi MO",
"Pretty boy peak",
"Prince looney",
"Princess Ting Ting",
"PR-LT-ELLERKR1",
"Psalms",
"PT-C8E504D4AFFE",
"Q seven",
"Quinton Nottingham's 27 iMac",
"R010 PLACE KTA 1",
"R11745",
"R2D2",
"R306",
"**R3@D!! R0C**",
"R411 Southgate Centre RCV 2",
"Rach Cell",
"Rachel Kim's phone",
"RADIO",
"Raja",
"Rajammal Ram",
"Rav4",
"ray curran",
"RAYTHEON-3C5D22",
"Rc_intl shipping",
"Reas",
"R-EASY",
"RHOD500",
"rhoda's iMac",
"Rick's Playbook",
"Rico Cell",
"RiichBoii's BlackBerry",
"RoadTunes",
"Robert",
"Rob's iPad",
"robs tele",
"Roc harland",
"rocio",
"Rome",
"Romell Calhoun",
"ROSEN",
"RTA BlackBerry 8330",
"rTsamsunglink",
"Rukky 9800",
"Ryue",
"s123ochm",
"s225jws",
"S500i",
"Sabrina",
"SAL-F55SSK1",
"Sam",
"samba",
"SAMMIIII",
"Samsung M350",
"Samsung M360",
"Samsung Mantra",
"SAMSUNGQ530-PC",
"Samsung Re",
"Samsung ReclaimTRJKEIIJJJRC",
"Samsung S7330",
"Samsung SCH-A930",
"Samsung Seek",
"Samsung SeeK",
"Samsung Wave(1363)",
"Samsung wep450",
"Samsungx",
"SamY",
"SANTii BABii <3",
"SANYO ",
"SANYO Incogni",
"SANYO Incognito Ms. Butterfly",
"SANYO KATANA",
"SANYO KATANA DLX",
"SANYO KATANA Eclipse X",
"SANYO KATANA I",
"SANYO KATANA II",
"SANYO PRO-700a",
"SANYO SCP-270",
"SANYO SCP-3810jm",
"SANYO SCP-7050",
"SANYO SCP-8400",
"SANYO Sharff",
"Sarah LG GT350",
"Sasha",
"Saurabh's iPhone",
"SCH-A950",
"SCH-A970",
"SCH-i760",
"SCH-i910",
"SCH-R100",
"SCH-R3",
"SCH-R351",
"SCH-R561",
"Seagulls ",
"Sean Brouilette's iMac Intel DS 09",
"SEAN-PC",
"SGH-A187",
"SGH-A197",
"SGH-A637",
"SGH-A667",
"SGH-A667T",
"SGH-A68",
"SGH-A736",
"SGH-A747",
"SGH-A767A",
"SGH-A817",
"SGH-A827",
"SGH-A836",
"SGH-A847",
"SGH-A847D",
"SGH-A847M",
"SGH-A885",
"SGH-A927",
"SGH-C414",
"SGH-C414R",
"SGH-D347",
"SGH-D357",
"SGH-D407",
"SGH-D807",
"SGH-E250",
"SGH-F266",
"SGH-i620",
"SGH-i907",
"SGH-rochelle",
"SGH-S366",
"SGH-swinuha",
"SGH-T249",
"SGH-T259",
"SGH-T3",
"SGH-T339",
"SGH-T356",
"SGH-T359",
"SGH-T359 lovee youh !",
"SGH t369",
"SGH-T369",
"SGH-T439",
"SGH-T456",
"SGH-T46",
"SGH-T469",
"SGH-T469W",
"SGH-T47",
"SGH-T479",
"SGH-T479B",
"SGH-T566",
"SGH-T609",
"SGH-T636",
"SGH-T659",
"SGH-T669",
"SGH-T669B",
"SGH-T669Y",
"SGH-T746",
"shan",
"Shanes phone",
"Shane Tablet",
"Shawn",
"shelby wiltshire",
"Shugga",
"Sidekick",
"Sidekick 2008",
"Sidekick 20082p2lrujrok",
"Sidekick LX",
"Sidekick LX 2009",
"Sidekick(R)",
"Sidekick Slide",
"SKOOBY",
"Slider",
"SmartPhone",
"Sneaky Platypus",
"Soma cell",
"SONATA",
"Sony UP-DX100",
"SONY-VAIO",
"So this one time...",
"Spalady's Mac mini",
"SPH-",
"SPH-A640",
"SPH-A92",
"SPH-A920",
"SPH-H300",
"SPH-i325",
"SPH-M",
"SPH-M220",
"SPH-M3",
"SPH-M30",
"SPH-M300",
"SPH-M320",
"SPH-M33",
"SPH-M5",
"SPH-M50",
"SPH-M500",
"SPH-M510",
"SPH-M520",
"SPH-M54",
"SPH-M540A",
"SPH-M540BEJABRAJA",
"SPH-M55",
"SPH-M610",
"SPH-M800388ge",
"SPH-M81o",
"SPH-M850",
"SPH-Z400",
"SPLASH_SP",
"Spomenka",
"SR_409",
"Srinath",
"Stackz daddy",
"StarBoard FX [0877FB]",
"Steve",
"storm-0",
"StreetPilot 2820",
"StreetPilot c5 #3191220682",
"StreetPilot c5 #3349940904",
"StreetPilot c5 #3382162600",
"StreetPilot c5 #3385750845",
"StreetPilot c5 #3393880369",
"StreetPilot c5 #3393880541",
"StreetPilot c5 #3417370123",
"StreetPilot c5 #3423660189",
"StreetPilot c5 #3444520525",
"StreetPilot c550 #3184172304",
"StreetPilot c550 #3314050419",
"StreetPilot c550 #3332661443",
"StreetPilot c550 #3342510446",
"StreetPilot c550 #3358202958",
"SUNILLAPTOP",
"Super1!",
"susanaBlackBerry 8530",
"SW00000",
"SWAT-LOANER-283",
"SWAT-LOANER-298",
"SWAT-LOANER-299",
"SWAT-LOANER-356",
"SWAT-LOANER-371",
"SWAT-LOANER-402",
"Sync",
"sys65t",
"T100",
"T715a",
"T7380",
"TABLET",
"Taho",
"TALLY-7",
"tango",
"TASHA",
"Tay",
"Taylorkid365zWi",
"TDS-656PV-AM00727767",
"TECHNO_T10",
"TERC08-37-5077",
"Terry",
"testa's Keyboard",
"testa's Mouse",
"The Boss",
"the connection",
"The H500",
"THEO",
"tina",
"Tina",
"TM50",
"TM717",
"T-Mobile52",
"T-Mobile_Wing",
"tom blue",
"TomTom car kit",
"TomTom ECLIPSE II",
"TomTom GO 740 LIVE",
"TomTom GO 920",
"TomTom ONEv4",
"TONI LUV ME",
"TONYA",
"Too Fresh",
"TooMuch2Handle",
"ToonsTent",
"ToonsTent Phone",
"Torchy",
"Total Eclipse Mac mini",
"Touch Pro 2",
"TPGRT-2419296973-41012501",
"TPGRT-2420075157-41014301H",
"TPGRT-2420141921-41014309H",
"TPGRT-2420142186-41014309H",
"TPGRT-2420147002-41014309H",
"TPGRT-2420206896-41014709",
"TREE",
"Treo800w",
"TRNX-TBGILLEY",
"troublemaker",
"TSROSSER-PC",
"Tucci*",
"Tuff Phone",
"TUSPA02SLKME01P",
"TUSPA02SLKME01Y",
"TVA-V870714-L4",
"U1250",
"U5",
"U7519",
"UHI-SN2687",
"UHI-SN4117",
"UHI-SN5064",
"UME36",
"University Bookstore's iMac",
"Uno",
"USCHRTPARTRIDG5",
"user01's MacBook Pro",
"user02's MacBook Pro",
"user03's MacBook",
"USER-HP",
"USSLCND74623NY",
"VALYNN",
"Van",
"Vanilla",
"VARILPANXP405",
"VIRGO",
"Virus",
"VISLab's iMac",
"vislab's Mac Pro",
"VISPhone4697",
"Vivaz Pro U8",
"Vivian Nolan's iPhone",
"VMU Rumor Touch",
"VoyagerBT 5606470260",
"VoyagerBT 5608150293",
"VoyagerBT 5608440788",
"VoyagerBT 5609440246",
"VoyagerBT 6607400336",
"VoyagerBT 6607400342",
"VRBT400M",
"vsagaram",
"VT_WLAN",
"VW PHONE",
"VW UHV",
"W300i",
"W4111646",
"w4111755",
"W518 Taytan",
"W595",
"W600i",
"W760a",
"W800iblaklal",
"W810i",
"W995",
"wb motoq",
"Webster",
"welcome hedayo you are now",
"WEM-MO-DEV",
"wep450",
"WEP 480",
"WF138",
"Wheezy",
"Where2 #3434464536",
"Where2 #3461940240",
"WHHW M750",
"WideRay Jack",
"William",
"Willson Chu's MacBook",
"WIN-1RJ0MT7E1H1",
"WindowsCE",
"Wireless Gear",
"WM_Administrat1",
"WM_a_kuhnc1",
"WM_colley_arch1",
"WM_Nana_Ampons1",
"Wolf",
"WXP-SP2-PCCOE",
"X2-01",
"XL00070760",
"XL00070768",
"XL00070787",
"XL00075994",
"XXLO04-23-0104",
"XXLO04-23-0105",
"XXLO06-14-5381",
"XXRC06-31-5064",
"XXRC06-31-5086",
"XXXX08-43-5320",
"YOUR-0BF346585F",
"YOUR-4572D6EDC4",
"YOUR-59C96182D8",
"YOUR-6D5CE76110",
"Youre Beautiful",
"Your Vehicle",
"Yun's phone",
"Yup thas me yup",
"Z310a",
"Z520a",
"Z610i",
"Z750ajeslie",
"ZDRAVKA",
"Zell loc",
"Zeon",
"Zumo #3673210447",
"Zumo #3818738985",
"zuni"};
// EOF
