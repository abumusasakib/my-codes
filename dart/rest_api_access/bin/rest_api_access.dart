import 'package:http/http.dart' as http;

void main() async {
  // https://api.dart.dev/stable/3.1.5/dart-io/dart-io-library.html
  // https://pub.dev/packages/http
  var url = Uri.http('localhost:4044', '/contacts');
  var response = await http.get(url, headers: {
    'offset': '0',
    'pageSize': '10',
    'sortIndex': '1',
    'sortAsc': '1'
  });
  print('Response status: ${response.statusCode}');
  print('Response body: ${response.body}');
}
