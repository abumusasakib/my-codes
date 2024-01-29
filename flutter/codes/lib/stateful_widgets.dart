import 'package:flutter/foundation.dart';
import 'package:flutter/material.dart';
import 'dart:math';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatefulWidget {
  const MyApp({super.key});

  @override
  State<MyApp> createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  int state = 0;

  @override
  void initState() {
    final random = Random();
    state = random.nextInt(100);
    super.initState();
  }

  @override
  void dispose() {
    if (kDebugMode) {
      print('Dispose method called');
    }
    state = 0;
    super.dispose();
  }

  Color randomColor() {
    final random = Random();
    return Color.fromRGBO(
      random.nextInt(256), // Red value (0-255)
      random.nextInt(256), // Green value (0-255)
      random.nextInt(256), // Blue value (0-255)
      1.0, // Alpha value (1.0 for fully opaque)
    );
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          backgroundColor: Colors.green,
          title: const Text('Flutter is Fun!'),
        ),
        body: ListView.builder(itemBuilder: (_, index) {
          return Container(
            color: randomColor(),
            height: MediaQuery.of(context).size.height,
            child: Center(
              child: Text(
                '$state',
                textAlign: TextAlign.center,
                style: const TextStyle(fontSize: 60.0),
              ),
            ),
          );
        }),
        floatingActionButton: FloatingActionButton(
          onPressed: () {
            setState(() {
              state++;
            });
          },
          child: const Icon(Icons.add),
        ),
        bottomNavigationBar: BottomNavigationBar(
          items: const [
            BottomNavigationBarItem(
              icon: Icon(Icons.home),
              label: 'Home',
            ),
            BottomNavigationBarItem(
              icon: Icon(Icons.business),
              label: 'Business',
            ),
            BottomNavigationBarItem(
              icon: Icon(Icons.school),
              label: 'School',
            ),
          ],
        ),
        drawer: Drawer(
            child: ListView(
          scrollDirection: Axis.vertical,
          addAutomaticKeepAlives: false,
          children: [
            ListTile(
              leading: const Icon(Icons.person),
              title: const Text('My Profile'),
              onTap: () {
                Navigator.pop(context);
              },
            ),
            ListTile(
              leading: const Icon(Icons.book),
              title: const Text('My Course'),
              onTap: () {
                Navigator.pop(context);
              },
            ),
          ],
        )),
      ),
    );
  }
}
