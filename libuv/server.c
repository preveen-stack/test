void on_new_connection(uv_stream_t *server, int status) {
  if (status < 0) {
    fprintf(stderr, "Error on_new_connection: %s\n", uv_strerror(status));
    return;
  }

  uv_tcp_t *client = (uv_tcp_t*) malloc(sizeof(uv_tcp_t));
  uv_tcp_init(uv_default_loop(), client);

  if (uv_accept(server, (uv_stream_t*) client) == 0) {
    uv_buf_t buffer = uv_buf_init("Hello, world!\n", 14);
    uv_write_t *req = (uv_write_t*) malloc(sizeof(uv_write_t));
    uv_write(req, (uv_stream_t*) client, &buffer, 1, NULL);
  }
  else {
    uv_close((uv_handle_t*) client, NULL);
  }
}

int main(int argc, char **argv) {
  uv_loop_t *loop = uv_default_loop();

  uv_tcp_t server;
  uv_tcp_init(loop, &server);

  struct sockaddr_in bind_addr;
  uv_ip4_addr("0.0.0.0", DEFAULT_PORT, &bind_addr);

  uv_tcp_bind(&server, (const struct sockaddr*)&bind_addr, 0);

  int status = uv_listen((uv_stream_t*) &server, 128, on_new_connection);
  if (status != 0) {
    fprintf(stderr, "Error uv_listen: %s\n", uv_strerror(status));
    return 1;
  }

  return uv_run(loop, UV_RUN_DEFAULT);
}
