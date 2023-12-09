**API Documentation for RESTful Dart Application**

<https://github.com/Dev-Owl/dart_backend_example/tree/main>

This documentation provides an overview of the RESTful Dart application and its endpoints.

### Introduction

This RESTful Dart application serves company contact data. It exposes the following endpoints:

- `GET /contacts`: Retrieve a list of company contacts with optional sorting, pagination, and filtering.

### Base URL

The base URL for this API is `http://localhost:4044`.

### Endpoints

#### 1. Get Contacts

- **Endpoint**: `/contacts`
- **Method**: GET
- **Description**: Retrieve a list of company contacts.
- **Parameters**:

  - `offset` (optional, default: 0) - Offset for pagination.
  - `pageSize` (optional, default: 10) - Number of items per page.
  - `sortIndex` (optional, default: 1) - Index to specify the sorting field (1 - id, 2 - companyName, 3 - firstName, 4 - lastName, 5 - phone).
  - `sortAsc` (optional, default: true) - Sort in ascending order (1 - ascending, 0 - descending).
- **Example Request**:

  ```http
  GET http://localhost:4044/contacts?offset=0&pageSize=10&sortIndex=1&sortAsc=1
  ```
- **Example Response**:

  ```json
  {
    "totalRows": 10,
    "rows": [
      {
        "id": 1,
        "companyName": "Company A",
        "firstName": "John",
        "lastName": "Doe",
        "phone": "123-456-7890"
      },
      // ... More contact objects ...
    ]
  }
  ```

### Error Handling

- If an error occurs, the API responds with an appropriate HTTP status code and an error message in the response body.
- HTTP Status Codes:

  - `200`: Successful response.
  - `500`: Internal Server Error - Something went wrong on the server.

### CORS Support

- This API supports Cross-Origin Resource Sharing (CORS), allowing requests from any origin.

### Example Usage

You can use tools like Postman or cURL to interact with this API. For example, to retrieve the first 10 contacts sorted by `id` in ascending order:

```http
GET http://localhost:4044/contacts?offset=0&pageSize=10&sortIndex=1&sortAsc=1
```

### Notes

- This API serves data from a local JSON file, which can be found at `http://localhost:4044/data.json`.
