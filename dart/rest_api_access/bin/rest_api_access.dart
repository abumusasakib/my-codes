import 'package:http/http.dart' as http;
import 'dart:convert';

class Data {
  int totalRows;
  List<Record> rows;

  Data({required this.totalRows, required this.rows});

  factory Data.fromJson(Map<String, dynamic> json) {
    return Data(
      totalRows: json['totalRows'] as int,
      rows: (json['rows'] as List<dynamic>)
          .map((record) => Record.fromJson(record as Map<String, dynamic>))
          .toList(),
    );
  }
}

class Record {
  int id;
  String companyName;
  String firstName;
  String lastName;
  String phone;

  Record({
    required this.id,
    required this.companyName,
    required this.firstName,
    required this.lastName,
    required this.phone,
  });

  factory Record.fromJson(Map<String, dynamic> json) {
    return Record(
      id: json['id'] as int,
      companyName: json['companyName'] as String,
      firstName: json['firstName'] as String,
      lastName: json['lastName'] as String,
      phone: json['phone'] as String,
    );
  }

  @override
  String toString() {
    return 'Record(id: $id, companyName: $companyName, '
        'firstName: $firstName, lastName: $lastName, phone: $phone)';
  }
}

Record _parseRecordString(String recordString) {
  // Extracting values from the string manually
  final idMatch = RegExp(r'id: (\d+)').firstMatch(recordString);
  final companyNameMatch = RegExp(r'companyName: (.+?),').firstMatch(recordString);
  final firstNameMatch = RegExp(r'firstName: (.+?),').firstMatch(recordString);
  final lastNameMatch = RegExp(r'lastName: (.+?),').firstMatch(recordString);
  final phoneMatch = RegExp(r'phone: ([\+\d]+)').firstMatch(recordString);

  // Checking if all required fields are found
  if (idMatch == null ||
      companyNameMatch == null ||
      firstNameMatch == null ||
      lastNameMatch == null ||
      phoneMatch == null) {
    throw FormatException('Invalid record format: $recordString');
  }

  // Extracting values from the RegExp matches
  final id = int.parse(idMatch.group(1)!);
  final companyName = companyNameMatch.group(1)!;
  final firstName = firstNameMatch.group(1)!;
  final lastName = lastNameMatch.group(1)!;
  final phone = phoneMatch.group(1)!;

  // Creating and returning the Record object
  return Record(
    id: id,
    companyName: companyName,
    firstName: firstName,
    lastName: lastName,
    phone: phone,
  );
}


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

  // print('Response status: ${response.statusCode}');
  // print('Response body: ${response.body}');

  // string to map
  var jsonString = response.body;
  Map<String, dynamic> jsonData = json.decode(jsonString);

  // map to list
  Data data = Data.fromJson(jsonData);

  // Accessing list data
  print("Total rows: ${data.totalRows}");
  data.rows.forEach((record) {
    print(
        '${record.id}: Company: ${record.companyName}; Name: ${record.firstName} ${record.lastName}; Phone Number: ${record.phone}');
  });

  // list to indexed map

  List<String> recordList =
      data.rows.map((element) => element.toString()).toList();

  print(recordList);

  Map<int, Record> indexedMap = {};

  for (var recordString in recordList) {
    Record parsedRecord = _parseRecordString(recordString);
    int id = parsedRecord.id;
    indexedMap[id] = parsedRecord;
  }

  print(indexedMap);
}
