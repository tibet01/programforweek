import 'package:apptibet/page/1p.dart';
import 'package:apptibet/page/2p.dart';
import 'package:apptibet/page/3p.dart';
import 'package:apptibet/page/check.dart';
import 'package:apptibet/page/home.dart';
import 'package:apptibet/page/registerpage.dart';
import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: HomePage(),
      title: 'TIBET',
      routes: {
        '/register-page': (context) => RegisterPage(),
        '/page-one': (context) => pageone(),
        '/page-two': (context) => pagetwo(),
        '/page-three': (context) => pagethree(),
        '/page-home': (context) => HomePage(),
        '/page-check': (context) => check(),
      },
    );
  }
}
